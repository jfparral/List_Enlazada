#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto)
{
    ElementoLista *tmp;
    tmp=malloc (sizeof(ElementoLista));
    if(&lista->numeroElementos==0)
    {
        printf("Lista vacia");
        return NULL;
    }
    else{
        *tmp=lista->ancla;
        for(int i=0;i<lista->numeroElementos;i++)
        {
            tmp=tmp->siguiente;
            if(tmp->objeto==objeto)
            {
                return tmp;
            }
        }
        printf("Elemento no se encuentra");
        return NULL;
    }
}