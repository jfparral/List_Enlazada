#include "miLista.h"

extern ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto)
{
    ElementoLista tmp;
    tmp=(ElementoLista *)malloc (sizeof(ElementoLista *));
    if(lista->ancla==NULL)
    {
        printf("Lista vacia");
    }
    else{
        tmp=lista->ancla;
        for(int i=0;i<lista->numeroElementos;i++)
        {
            if(tmp->objeto==objeto)
            {
                return tmp;
            }
            tmp=tmp->siguiente;
        }
        printf("Elemento no se encuentra");
        return NULL;
    }
}