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

$(OBJ)/utilidades.o: $(INCLUDE)/utilidades.h $(SRC)/utilidades.cpp
	g++ -c -o $(OBJ)/utilidades.o $(SRC)/utilidades.cpp -I./$(INCLUDE) 

$(OBJ)/ejercicio3.o: $(INCLUDE)/utilidades.h $(SRC)/ejercicio3.cpp
	g++ -c -o $(OBJ)/ejercicio3.o $(SRC)/ejercicio3.cpp -I./$(INCLUDE)

$(BIN)/ejercicio3: $(OBJ)/utilidades.o $(OBJ)/ejercicio3.o
	g++ -o $(BIN)/ejercicio3 $(OBJ)/utilidades.o $(OBJ)/ejercicio3.o
