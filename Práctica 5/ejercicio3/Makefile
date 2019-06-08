OBJ=obj
BIN=bin
SRC=src
INCLUDE=include

all: $(BIN)/ejercicio3
clean:
	rm obj/*.o
	echo "--Se han limpiado los archivos temporales--"

mrproper:clean
	rm bin/ejercicio3
	echo "--Se ha borrado el ejecutable ejercicio3--"

valgrind: 
	g++ -g -o bin/ejercicio3 src/main.cpp src/Punto.cpp src/utilidades.cpp src/Polilinea.cpp -Iinclude
	valgrind --leak-check=full --track-origins=yes ./bin/ejercicio3

$(OBJ)/utilidades.o: $(INCLUDE)/utilidades.h $(SRC)/utilidades.cpp
	g++ -c -o $(OBJ)/utilidades.o $(SRC)/utilidades.cpp -I$(INCLUDE)

$(OBJ)/Punto.o: $(INCLUDE)/Punto.h $(SRC)/Punto.cpp
	g++ -c -o $(OBJ)/Punto.o $(SRC)/Punto.cpp -I$(INCLUDE)

$(OBJ)/Polilinea.o: $(INCLUDE)/Polilinea.h $(INCLUDE)/Punto.h $(SRC)/Polilinea.cpp
	g++ -c -o $(OBJ)/Polilinea.o $(SRC)/Polilinea.cpp -I$(INCLUDE)

$(OBJ)/main.o: $(INCLUDE)/utilidades.h $(INCLUDE)/Punto.h $(INCLUDE)/Polilinea.h $(SRC)/main.cpp
	g++ -c -o $(OBJ)/main.o $(SRC)/main.cpp -I$(INCLUDE)

$(BIN)/ejercicio3: $(OBJ)/utilidades.o $(OBJ)/Punto.o $(OBJ)/Polilinea.o $(OBJ)/main.o 
	g++ -o $(BIN)/ejercicio3 $(OBJ)/main.o $(OBJ)/utilidades.o $(OBJ)/Polilinea.o $(OBJ)/Punto.o -I$(INCLUDE)
