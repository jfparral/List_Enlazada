#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern ElementoLista *Lista_Ultimo(ListaEnlazada *lista)
{
    ElementoLista *tmp;
    tmp=(ElementoLista *)malloc(sizeof(ElementoLista *));
     if(lista->numeroElementos==0){
        return NULL;
    }
    else if(lista->numeroElementos==1){
        return lista->ancla;
    }
    else{
        tmp->siguiente=lista->ancla->siguiente;
        tmp->anterior=lista->ancla->anterior;
        for(int i=0;i<lista->numeroElementos;i++)
        {
            tmp->anterior=tmp->siguiente;
            tmp->siguiente=tmp->siguiente->siguiente;
            if(tmp->siguiente==NULL)
            {
                return tmp->anterior;
            }
        }
    }
}