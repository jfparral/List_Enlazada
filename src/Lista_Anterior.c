#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"


extern ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento)
{
	 if(Lista_Buscar(*lista,elemento->objeto)==NULL || lista->numeroElementos<2 || Lista_Ultimo(*lista)->anterior==NUll)
	{
		return NULL;
	}
	else
	{
		return elemento->anterior;
	}
}