#include "miLista.h"

extern ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento)
{
    if(Lista_Buscar(*lista,elemento->objeto)==NULL || lista->numeroElementos<2 || Lista_Ultimo(*lista)->siguiente==NUll)
	{
		return NULL;
	}
	else
	{
		return elemento->siguiente;
	}
}