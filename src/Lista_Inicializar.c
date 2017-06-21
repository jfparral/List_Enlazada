
extern int Lista_Inicializar(ListaEnlazada *lista){
	//lista=NULL;
	
	if (lista!=NULL){
        lista =(ListaEnlazada*) malloc(sizeof(ListaEnlazada));
		lista->numeroElementos=0;
		lista->ancla=NULL;
		return TRUE;
	}else{
        printf( "No hay memoria disponible!\n");
		return FALSE;
	} 
}