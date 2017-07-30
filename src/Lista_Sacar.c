#include "miLista.h"
#include <stdlib.h>

extern void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento){
	elemento->anterior->siguiente = elemento->siguiente;			//se re-asignan los apuntadores del elemento a eliminar
	elemento->siguiente->anterior = elemento->anterior;
	lista->numeroElementos--;						//se reduce el numero de elemntos de la lista
}
