#estableciendo variables a las librerias y archivos cabecera
INCLUDE=-Iinclude/
LIBS=-Llib/

#creando ejecutable
prueba: pruebaLista.o
	gcc $(LIBS) obj/pruebaLista.o -Lm lib/*.so -o bin/prueba

#creando .o de main
pruebLista.o: src/pruebLista.c
	gcc -Wall -c $(INCLUDE) src/pruebLista.c -o obj/pruebLista.o

#generamos libreria dinamica
libmilista.so: src/Lista_Inicializar.c src/Lista_Conteo.c src/Lista_Vacia.c  src/Lista_Buscar.c src/Lista_InsertarFin.c src/Lista_InsertarInicio.c src/Lista_Sacar.c src/Lista_SacarTodos.c src/Lista_InsertarDespues.c src/Lista_InsertarAntes.c src/Lista_Primero.c src/Lista_Ultimo.c src/Lista_Siguiente.c src/Lista_Anterior.c
	gcc -Wall $(INCLUDE) -shared -fPIC src/Lista_Inicializar.c src/Lista_Conteo.c src/Lista_Vacia.c  src/Lista_Buscar.c src/Lista_InsertarFin.c src/Lista_InsertarInicio.c src/Lista_Sacar.c src/Lista_SacarTodos.c src/Lista_InsertarDespues.c src/Lista_InsertarAntes.c src/Lista_Primero.c src/Lista_Ultimo.c src/Lista_Siguiente.c src/Lista_Anterior.c -o lib/libmilista.so


.PHONY: clean
clean:
	rm -rf obj/* bin/* lib/*