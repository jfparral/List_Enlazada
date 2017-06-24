#include "miLista.h"

extern ElementoLista *Lista_Primero(ListaEnlazada *lista)
{
    if(lista->numeroElementos==0)
    {
        return NULL;
    }
    return lista->ancla;
}