OBJ=obj
BIN=bin
SRC=src
INCLUDE=include

all: $(BIN)/ejercicio5
clean:
	rm obj/*.o
	echo "--Se han limpiado los archivos temporales--"

mrproper:clean
	rm bin/ejercicio5
	echo "--Se ha borrado el ejecutable ejercicio5--"

$(OBJ)/utilidades.o: $(INCLUDE)/utilidades.h $(SRC)/utilidades.cpp $(SRC) 
	g++ -c -o $(OBJ)/utilidades.o $(SRC)/utilidades.cpp -I$(INCLUDE)

$(OBJ)/ejercicio5.o: $(INCLUDE)/utilidades.h $(SRC)/ejercicio5.cpp
	g++ -c -o $(OBJ)/ejercicio5.o $(SRC)/ejercicio5.cpp -I$(INCLUDE)

$(BIN)/ejercicio5: $(OBJ)/utilidades.o $(OBJ)/ejercicio5.o
	g++ -o $(BIN)/ejercicio5 $(OBJ)/ejercicio5.o $(OBJ)/utilidades.o -I$(INCLUDE)
