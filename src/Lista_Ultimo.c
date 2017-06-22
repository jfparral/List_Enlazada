#include <stdio.h>
#include <stdlib.h>
#include "miLista.h"

extern ElementoLista *Lista_Ultimo(ListaEnlazada *lista)
{
       ElementoLista *tmp;
    tmp=(ElementoLista *)malloc(sizeof(ElementoLista *));
     if(lista->numeroElementos==0){
        return NULL;
    }
    else if(lista->numeroElementos==1){
        return lista->ancla;
    }
    else{
        return lista->ancla->anterior;
        
    }
}
