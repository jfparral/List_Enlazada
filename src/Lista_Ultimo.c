#include <stdlib.h>
#include "miLista.h"

extern ElementoLista *Lista_Ultimo(ListaEnlazada *lista)
{
    ElementoLista *tmp=malloc(sizeof(ElementoLista *));
    *tmp=lista->ancla;
     if(lista->numeroElementos==0){
        return NULL;
    }
    else if(lista->numeroElementos==1){
        return tmp->anterior;
    }
    else{
        return tmp->anterior;
        
    }
}
