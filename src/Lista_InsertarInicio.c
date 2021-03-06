#include "miLista.h"
#include <stdlib.h>

extern int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto){                      //se realiza lo mismo de la funcion anterior solo que ahora al principio
	ElementoLista *nuevo_elemento = (ElementoLista*)malloc(sizeof(ElementoLista));
	nuevo_elemento->objeto = objeto;
	//strcpy(nuevo_elemento->objeto, objeto);
	if (lista->numeroElementos == 0){
		nuevo_elemento->siguiente = &lista->ancla;
		nuevo_elemento->anterior = &lista->ancla;
		lista->ancla.siguiente = nuevo_elemento;
		lista->ancla.anterior = nuevo_elemento;
		lista->numeroElementos++;
	} else{
		ElementoLista *actual = (ElementoLista*)malloc(sizeof(ElementoLista));
		actual = lista->ancla.siguiente;
		nuevo_elemento->anterior = &(lista->ancla);
		nuevo_elemento->siguiente = actual;
		lista->ancla.siguiente = nuevo_elemento;
		actual->anterior = nuevo_elemento;
	  	lista->numeroElementos++;
	}  	return 0;
}
