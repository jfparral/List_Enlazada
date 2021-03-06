#estableciendo variables a las librerias y archivos cabecera
INCLUDE=-Iinclude/
LIBS=-Llib/

#creando ejecutable
prueba: libmilista.so -lm pruebaLista.o
	gcc -g -Wall obj/pruebaLista.o -Llib/ -lmilista -Wl,-rpath,./lib -lm -o prueba


#generamos libreria dinamica
libmilista.so: src/Lista*.c
	gcc -Wall $(INCLUDE) -shared -fPIC src/Lista*.c -o lib/libmilista.so

#creando .o de main
Lista_Anterior.o: src/Lista_anterior.c include/miLista.h
	gcc -c -fPIC -g -Wall -I./include/ src/Lista_Anterior.c -o obj/Lista_Anterior.o

Lista_Buscar.o: src/Lista_Buscar.c include/miLista.h
	gcc -c -fPIC -g -Wall -I./include/ src/Lista_Buscar.c -o obj/Lista_Buscar.o

Lista_Conteo.o: src/Lista_Conteo.c include/miLista.h
	gcc -c -fPIC -g -Wall -I./include/ src/Lista_Conteo.c -o obj/Lista_Conteo.o

Lista_inicializar.o: src/Lista_inicializar.c include/miLista.h
	gcc -c -fPIC -g -Wall -I./include/ src/Lista_inicializar.c -o obj/Lista_inicializar.o

Lista_InsertarAntes.o: src/Lista_InsertarAntes.c include/miLista.h
	gcc -c -fPIC -g -Wall -I./include/ src/Lista_InsertarAntes.c -o obj/Lista_InsertarAntes.o

Lista_InsertarDespues.o: src/Lista_InsertarDespues.c include/miLista.h
	gcc -c -fPIC -g -Wall -I./include/ src/Lista_InsertarDespues.c -o obj/Lista_InsertarDespues.o

Lista_InsertarFin.o: src/Lista_InsertarFin.c include/miLista.h
	gcc -c -fPIC -g -Wall -I./include/ src/Lista_InsertarFin.c -o obj/Lista_InsertarFin.o

Lista_InsertarInicio.o: src/Lista_InsertarInicio.c include/miLista.h
	gcc -c -fPIC -g -Wall -I./include/ src/Lista_InsertarInicio.c -o obj/Lista_InsertarInicio.o

Lista_Primero.o: src/Lista_Primero.c include/miLista.h
	gcc -c -fPIC -g -Wall -I./include/ src/Lista_Primero.c -o obj/Lista_Primero.o

Lista_Sacar.o: src/Lista_Sacar.c include/miLista.h
	gcc -c -fPIC -g -Wall -I./include/ src/Lista_Sacar.c -o obj/Lista_Sacar.o

Lista_SacarTodos.o: src/Lista_SacarTodos.c include/miLista.h
	gcc -c -fPIC -g -Wall -I./include/ src/Lista_SacarTodos.c -o obj/Lista_SacarTodos.o

Lista_Siguiente.o: src/Lista_Siguiente.c include/miLista.h
	gcc -c -fPIC -g -Wall -I./include/ src/Lista_Siguiente.c -o obj/Lista_Siguiente.o

Lista_Ultimo.o: src/Lista_Ultimo.c include/miLista.h
	gcc -c -fPIC -g -Wall -I./include/ src/Lista_Ultimo.c -o obj/Lista_Ultimo.o

Lista_Vacia.o: src/Lista_Vacia.c include/miLista.h
	gcc -c -fPIC -g -Wall -I./include/ src/Lista_Vacia.c -o obj/Lista_Vacia.o

pruebaLista.o: src/pruebaLista.c include/miLista.h
	gcc -c -fPIC -g -Wall -I./include/ src/pruebaLista.c -o obj/pruebaLista.o

.PHONY: clean
clean:
	rm -rf obj/* bin/* lib/* prueba
