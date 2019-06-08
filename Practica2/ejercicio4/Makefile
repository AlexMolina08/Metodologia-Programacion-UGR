OBJ=obj
BIN=bin
SRC=src
INCLUDE=include

all: $(BIN)/ejercicio4
clean:
	rm obj/*.o
	echo "--Se han limpiado los archivos temporales--"

mrproper:clean
	rm bin/ejercicio4
	echo "--Se ha borrado el ejecutable ejercicio4--"

$(OBJ)/utilidades.o: $(INCLUDE)/utilidades.h $(SRC)/utilidades.cpp $(SRC) 
	g++ -c -o $(OBJ)/utilidades.o $(SRC)/utilidades.cpp -I$(INCLUDE)

$(OBJ)/ejercicio4.o: $(INCLUDE)/utilidades.h $(SRC)/ejercicio4.cpp
	g++ -c -o $(OBJ)/ejercicio4.o $(SRC)/ejercicio4.cpp -I$(INCLUDE)

$(BIN)/ejercicio4: $(OBJ)/utilidades.o $(OBJ)/ejercicio4.o
	g++ -o $(BIN)/ejercicio4 $(OBJ)/ejercicio4.o $(OBJ)/utilidades.o -I$(INCLUDE)
