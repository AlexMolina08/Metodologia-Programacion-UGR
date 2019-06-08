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

valgrind: 
	g++ -g -o bin/ejercicio4 src/main.cpp src/Lista.cpp src/utilidades.cpp src/Celda.cpp -Iinclude
	valgrind --leak-check=full --track-origins=yes ./bin/ejercicio4

$(OBJ)/utilidades.o: $(INCLUDE)/utilidades.h $(SRC)/utilidades.cpp
	g++ -c -o $(OBJ)/utilidades.o $(SRC)/utilidades.cpp -I$(INCLUDE)

$(OBJ)/Celda.o: $(INCLUDE)/Celda.h $(SRC)/Celda.cpp
	g++ -c -o $(OBJ)/Celda.o $(SRC)/Celda.cpp -I$(INCLUDE)

$(OBJ)/Lista.o: $(INCLUDE)/Lista.h $(INCLUDE)/Celda.h $(SRC)/Lista.cpp
	g++ -c -o $(OBJ)/Lista.o $(SRC)/Lista.cpp -I$(INCLUDE)

$(OBJ)/main.o: $(INCLUDE)/utilidades.h $(INCLUDE)/Celda.h $(INCLUDE)/Lista.h $(SRC)/main.cpp
	g++ -c -o $(OBJ)/main.o $(SRC)/main.cpp -I$(INCLUDE)

$(BIN)/ejercicio4: $(OBJ)/utilidades.o $(OBJ)/Celda.o $(OBJ)/Lista.o $(OBJ)/main.o 
	g++ -o $(BIN)/ejercicio4 $(OBJ)/main.o $(OBJ)/utilidades.o $(OBJ)/Lista.o $(OBJ)/Celda.o -I$(INCLUDE)
