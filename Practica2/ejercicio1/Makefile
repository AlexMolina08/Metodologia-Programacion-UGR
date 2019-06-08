all:bin/ejercicio1
clean: 
	echo "--Limpieza de los archivos temporales--"
	rm obj/*.o
mrproper:clean
	rm bin/ejercicio1
obj/utilidades.o: include/utilidades.h src/utilidades.cpp
	g++ -c -o obj/utilidades.o src/utilidades.cpp -Iinclude

obj/ejercicio1.o: include/utilidades.h src/ejercicio1.cpp
	g++ -c -o obj/ejercicio1.o src/ejercicio1.cpp -Iinclude

bin/ejercicio1: obj/ejercicio1.o obj/utilidades.o
	g++ -o bin/ejercicio1 obj/ejercicio1.o obj/utilidades.o
