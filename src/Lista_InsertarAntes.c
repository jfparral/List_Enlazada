#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento)
{
    ElementoLista *nuevo,*tmp;
    nuevo=(ElementoLista *)malloc(sizeof(ElementoLista));
    tmp=(ElementoLista *)malloc(sizeof(ElementoLista));
    if(Lista_Buscar(*lista,elemento->objeto)!=NULL && Lista_Buscar(*lista,*objeto)!=NULL)
    {
        if(elemento->anterior==NULL)
        {
            nuevo->objeto=*objeto;
            tmp->anterior=elemento->anterior;
            nuevo->anterior=elemento->anterior;
            nuevo->siguiente=*elemento;
            elemento->anterior=*nuevo;
            return 1;
        }
        else{
            nuevo->objeto=*objeto;
            tmp->anterior=elemento->anterior;
            tmp->anterior->siguiente=*nuevo;
            nuevo->anterior=elemento->anterior;
            nuevo->siguiente=*elemento;
            elemento->anterior=*nuevo;
            return 1;
        }
    }
    else
    {
        return 0;
    }
}