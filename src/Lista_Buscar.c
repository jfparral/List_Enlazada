#include "miLista.h"
#include <stdlib.h>


extern ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){
	int i;
	ElementoLista *actual = (ElementoLista*)malloc(sizeof(ElementoLista)); //se crea un nuevo ElementoLista y se asigna memoria
	*actual = lista->ancla;
	for (i = 0; i <= lista->numeroElementos; i++){			//se itera sobre la lista
		if (actual->objeto == objeto){					//se compara el elemnto de la lista con el elemento introducido para buscar
			return actual;
		}
		
		actual = actual->siguiente;
	}
	return NULL;
}
