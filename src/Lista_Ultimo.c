#include "miLista.h"
#include <stdlib.h>

extern ElementoLista *Lista_Ultimo(ListaEnlazada *lista){			
	return lista->ancla.anterior;						//retorna el elemento anterior al ancla
}
