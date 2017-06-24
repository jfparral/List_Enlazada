#include "miLista.h"

extern int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto){
	ElementoLista *nuevo_elemento=(ElementoLista *) malloc (sizeof (ElementoLista));
	//memset(nuevo_elemento,0,sizeof(ElementeLista));
	nuevo_elemento->objeto=*objeto;
	
	if(lista->ancla==NULL && lista->numeroElementos==0)
	{
		nuevo_elemento->siguiente=nuevo_elemento;
		nuevo_elemento->anterior=nuevo_elemento;
		lista->ancla=nuevo_elemento;
		lista->numeroElementos++;
		return TRUE;
	}
	else if(lista->numeroElementos>0)
	{
		ElementoLista *tmp=(ElementoLista *)malloc(sizeof(ElementoLista));
		tmp=lista->ancla->siguiente;
		nuevo_elemento->anterior=lista->ancla->anterior;
		nuevo_elemento->anterior=lista->ancla->siguiente;
		lista->ancla=nuevo_elemento;
		tmp->anterior=nuevo_elemento;
		lista->numeroElementos++;
		return TRUE;
	}
	else{
		return FALSE;
	}
	//nuevo_elemento->siguiente = NULL;
	//lista->ancla= nuevo_elemento->anterior;
	//nuevo_elemento->siguiente=NULL;
	//lista->numeroElementos++;
}