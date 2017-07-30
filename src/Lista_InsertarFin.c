#include "miLista.h"
#include <stdlib.h>


extern int Lista_InsertarFin(ListaEnlazada *lista, void *objeto){
	int i;
	ElementoLista *nuevo_elemento = (ElementoLista*)malloc(sizeof(ElementoLista)); //se crea un nuevo elemento y se asigna memoria
	nuevo_elemento->objeto = objeto;
	//printf("%d\n", nuevo_elemento->objeto);

	if (lista->numeroElementos == 0){			//si la lista esta vacia
		nuevo_elemento->siguiente = &lista->ancla;	//se le asigna la posisicion del ancla ya que sera el primer elemnto de la lista
		nuevo_elemento->anterior = &lista->ancla;	//como es el primer elemento este estara rodeado por el ancla
		lista->ancla.siguiente = nuevo_elemento;	//el apuntador del ancla.siguiente sera al nuevo elemento
		lista->ancla.anterior = nuevo_elemento;		//el apuntador del ancla.anterior sera el nuevo elemento ya que sera el primer elemento
		lista->numeroElementos++;			//aumento el numero de elementos de la lista
	} else{							//caso contrario
		ElementoLista *actual = (ElementoLista*)malloc(sizeof(ElementoLista)); //creo el elemento actual y asigno memoria
		*actual = lista->ancla;
		for (i = 0; i <= lista->numeroElementos; i++){			//recorremos la lista segun el numero de elemntos
			if (actual->siguiente == &lista->ancla){
				actual->siguiente = nuevo_elemento;
				nuevo_elemento->anterior = actual;
				nuevo_elemento->siguiente = &lista->ancla;		//el apuntador siguiente de nuevo elemento  debe ubicar a la posicion del ancla
				lista->ancla.anterior = nuevo_elemento;			//el apuntador del ancla anterior debera ser el nuevo elemnto ya que se lo agrega al final
				lista->numeroElementos++;				//aumento el numero de los elemntos de la lista
				//printf("%d\n", i);
				return 1;
			}
			
			actual = actual->siguiente;
		}
	}
	
  	return 0;
}
