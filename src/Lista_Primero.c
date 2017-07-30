#include "miLista.h"
#include <stdlib.h>


extern ElementoLista *Lista_Primero(ListaEnlazada *lista){
	ElementoLista *tmp = &lista->ancla;					//se crea un elemento temporal y se le asigna la direccion de memoria del ancla
	if (lista->numeroElementos == 0){     					//si la laista esta vacia
		return NULL;							//retorna null
	}
	return tmp->siguiente;							//retorna el elemento siguiente al que apunta el ancla
}
