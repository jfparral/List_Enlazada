#include "miLista.h"
#include <stdlib.h>

extern int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){
	int i;
	ElementoLista *actual = (ElementoLista*)malloc(sizeof(ElementoLista));
	ElementoLista *nuevo_elemento = (ElementoLista*)malloc(sizeof(ElementoLista));
	actual = lista->ancla.siguiente;
	nuevo_elemento->objeto = objeto;
	for (i = 0; i <= lista->numeroElementos; i++){
		if (actual == elemento){
			ElementoLista *ant = (ElementoLista*)malloc(sizeof(ElementoLista));
			ant = actual->anterior;
			ant->siguiente = nuevo_elemento;
			nuevo_elemento->anterior = ant;
			nuevo_elemento->siguiente = actual;
			actual->anterior = nuevo_elemento;
			lista->numeroElementos++;
			//printf("%d\n", i);
			return 1;
		}else{
			if (actual->anterior == &lista->ancla){
				Lista_InsertarInicio(lista,objeto);
				return 1;
			}
		}
		
		actual = actual->siguiente;
	}
	return 0;
}

