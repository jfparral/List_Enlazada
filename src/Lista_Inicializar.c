#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "miLista.h"

extern int Lista_Inicializar(ListaEnlazada *lista){

	if(sizeof(lista->ancla)!=sizeof(ElementoLista))
	{// solo se da formato si la lista esta vacia
		ElementoLista *ancla1;
		memset(&ancla1,0,sizeof(ElementoLista));
		lista->ancla=(ElementoLista) *ancla1;
		ancla1->objeto=(void *)0;
		ancla1->anterior= NULL;
		ancla1->siguiente= NULL;
		lista->numeroElementos=0;
		return TRUE;
	}else{
		printf( "Lista ya inicializada!\n");
		return FALSE;
	} 
}