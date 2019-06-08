OBJ=obj
BIN=bin
SRC=src
INCLUDE=include

all: $(BIN)/ejercicio2
clean:
	rm obj/*.o
	echo "--Se han limpiado los archivos temporales--"

mrproper:clean
	rm bin/ejercicio2
	echo "--Se ha borrado el ejecutable ejercicio2--"

valgrind: 
	g++ -g -o bin/ejercicio2 src/main.cpp src/BigInt.cpp src/utilidades.cpp src/Celda.cpp -Iinclude
	valgrind --leak-check=full --track-origins=yes ./bin/ejercicio2

$(OBJ)/utilidades.o: $(INCLUDE)/utilidades.h $(SRC)/utilidades.cpp
	g++ -c -o $(OBJ)/utilidades.o $(SRC)/utilidades.cpp -I$(INCLUDE)

$(OBJ)/Celda.o: $(INCLUDE)/Celda.h $(SRC)/Celda.cpp
	g++ -c -o $(OBJ)/Celda.o $(SRC)/Celda.cpp -I$(INCLUDE)

$(OBJ)/BigInt.o: $(INCLUDE)/BigInt.h $(INCLUDE)/Celda.h $(SRC)/BigInt.cpp
	g++ -c -o $(OBJ)/BigInt.o $(SRC)/BigInt.cpp -I$(INCLUDE)

$(OBJ)/main.o: $(INCLUDE)/utilidades.h $(INCLUDE)/Celda.h $(INCLUDE)/BigInt.h $(SRC)/main.cpp
	g++ -c -o $(OBJ)/main.o $(SRC)/main.cpp -I$(INCLUDE)

$(BIN)/ejercicio2: $(OBJ)/utilidades.o $(OBJ)/Celda.o $(OBJ)/BigInt.o $(OBJ)/main.o 
	g++ -o $(BIN)/ejercicio2 $(OBJ)/main.o $(OBJ)/utilidades.o $(OBJ)/BigInt.o $(OBJ)/Celda.o -I$(INCLUDE)
