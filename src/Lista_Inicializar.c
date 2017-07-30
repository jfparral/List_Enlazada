#include "miLista.h"
#include <stdlib.h>

extern int Lista_Inicializar(ListaEnlazada *lista){
	lista->ancla.objeto = NULL;                    //inicializamos el apuntador del ancla
	lista->ancla.siguiente = NULL;			//inicializamos el apuntador a siguiente
	lista->ancla.anterior = NULL;			//inicializamos el apuntador a anterior
	lista->numeroElementos = 0;			//inicialmente la lista esta vacia
	return 1;
}
