OBJ=obj
BIN=bin
SRC=src
INCLUDE=include

all: $(BIN)/barquitos
clean:
	rm obj/*.o
	echo "--Se han limpiado los archivos temporales del barquitos--"

mrproper:clean
	rm bin/ejercicio4
	echo "--Se ha borrado el ejecutable barquitos--"

$(OBJ)/Barquitos.o: $(INCLUDE)/Barquitos.h $(SRC)/barquitos.cpp  
	g++ -c -o $(OBJ)/Barquitos.o $(SRC)/Barquitos.cpp -I$(INCLUDE)

$(OBJ)/main.o: $(INCLUDE)/Barquitos.h $(SRC)/main.cpp
	g++ -c -o $(OBJ)/main.o $(SRC)/main.cpp -I$(INCLUDE)

$(BIN)/barquitos: $(OBJ)/main.o $(OBJ)/Barquitos.o
	g++ -o $(BIN)/barquitos $(OBJ)/Barquitos.o $(OBJ)/main.o -I$(INCLUDE)
