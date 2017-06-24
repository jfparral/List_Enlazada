#estableciendo variables a las librerias y archivos cabecera
INCLUDE=-Iinclude/
LIBS=-Llib/

#creando ejecutable
prueba: pruebaLista.o libmilista.so
	gcc $(LIBS) obj/pruebaLista.o -Lm lib/*.so -o bin/prueba

#creando .o de main
pruebaLista.o: src/pruebaLista.c
	gcc -Wall -c $(INCLUDE) src/pruebaLista.c -o obj/pruebaLista.o

#generamos libreria dinamica
libmilista.so: src/Lista*.c
	gcc -Wall $(INCLUDE) -shared -fPIC src/Lista*.c -o lib/libmilista.so


.PHONY: clean
clean:
	rm -rf obj/* bin/* lib/*