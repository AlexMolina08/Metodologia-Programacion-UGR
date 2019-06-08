OBJ=obj
BIN=bin
SRC=src
INCLUDE=include

all:$(BIN)/ejercicio1

clean:
	rm obj/*.o
	echo "--Se han limpiado los archivos temporales--"

mrproper:clean
	rm bin/ejercicio1
	echo "--Se ha borrado el ejecutable--"

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INCLUDE)/utilidades.h 
	g++ -c -o $(OBJ)/utilidades.o $(SRC)/utilidades.cpp -I./$(INCLUDE)

$(OBJ)/ejercicio1.o: $(SRC)/ejercicio1.cpp $(INCLUDE)/utilidades.h
	g++ -c -o $(OBJ)/ejercicio1.o $(SRC)/ejercicio1.cpp -I./$(INCLUDE)

$(BIN)/ejercicio1: $(OBJ)/utilidades.o $(OBJ)/ejercicio1.o 
	g++ -o $(BIN)/ejercicio1 $(OBJ)/utilidades.o $(OBJ)/ejercicio1.o -I./$(INCLUDE)
