extern int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto){
	ElementoLista *nuevo_elemento=(ElementoLista *) malloc (sizeof (ElementoLista));
	//memset(nuevo_elemento,0,sizeof(ElementeLista));
	nuevo_elemento->objeto=objeto;
	
	//nuevo_elemento->siguiente = NULL;
	lista->ancla= nuevo_elemento->anterior;
	nuevo_elemento->siguiente=NULL;
	lista->numeroElementos++;
	return 0;
}