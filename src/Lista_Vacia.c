extern int Lista_Vacia(ListaEnlazada *lista){
	if(lista->numeroElementos==0 && lista->ancla==NULL){
		return 0;//esta vacia
	}else{
		return 1;//esta llena
	}
}