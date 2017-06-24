
#include "miLista.h"

extern int Lista_Vacia(ListaEnlazada *lista){
	if(lista->numeroElementos==0 && lista->ancla==NULL){
		return TRUE;//esta vacia
	}else{
		return FALSE;//esta llena
	}
}