#include "miLista.h"
#include <stdlib.h>


extern ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento){
	if (lista->numeroElementos == 0 || elemento == NULL 
		|| (elemento->siguiente == &lista->ancla)){			//para estos casos no existira elemento siguiente
		return NULL;
	}
	return elemento->siguiente;
}
