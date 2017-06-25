#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern ElementoLista *Lista_Primero(ListaEnlazada *lista)
{
    ElementoLista *inicio=malloc(sizeof(ElementoLista));
    *inicio=lista->ancla;
    if(lista->numeroElementos==0)
    {
        return NULL;
    }
    else{
        return inicio->siguiente;
    }
    
}