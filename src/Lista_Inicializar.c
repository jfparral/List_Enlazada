
include "miLista.h"

extern int Lista_Inicializar(ListaEnlazada *lista){
	//lista=NULL;
	
	//if (lista!=NULL){ una lista nueva siempre viene con NULL aqui es que se la inicializa
	if(lista->ancla!=NULL)// solo se da formato si la lista esta vacia
        lista =(ListaEnlazada*) malloc(sizeof(ListaEnlazada));
		lista->numeroElementos=0;
		lista->ancla=NULL;
		return TRUE;
	}else{
        //printf( "No hay memoria disponible!\n");
		printf( "Lista ya inicializada!\n");
		return FALSE;
	} 
}