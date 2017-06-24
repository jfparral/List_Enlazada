#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern int Lista_InsertarFin(ListaEnlazada *lista, void *objeto)
{
    ElementoLista nuevo=(ElementoLista *)malloc (sizeof(ElementoLista *));
    nuevo->objeto=objeto;
    if(lista->ancla==NULL)
    {
        //lista->ancla->objeto=objeto;
        lista->ancla->anterior=nuevo;
        lista->ancla->siguiente=nuevo;
        nuevo->anterior=nuevo;
        nuevo->siguiente=nuevo;
        lista->numeroElementos++;
        return TRUE;
    }
    else if(lista->numeroElementos!=NULL)
    {
        ElementoLista tmp=(ElementoLista *)malloc (sizeof(ElementoLista *));
        tmp=lista->ancla->anterior;
        tmp->siguiente=nuevo;
        nuevo->anterior=tmp;
        nuevo->siguiente=lista->ancla->siguiente;
        lista->ancla->anterior=nuevo;
        lista->numeroElementos++;
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}