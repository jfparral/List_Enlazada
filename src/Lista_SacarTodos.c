#include "miLista.h"

extern void Lista_SacarTodos(ListaEnlazada *lista)
{
    ElementoLista tmp=(ElementoLista *) malloc (sizeof(ElementoLista *));
    tmp=lista->ancla->siguiente;
    for(int i=0;i<lista->numeroElementos;i++)
    {
        tmp=tmp->siguiente;
        free(tmp->anterior);
    }
    lista->ancla=NULL;
    lista->numeroElementos=0;
}