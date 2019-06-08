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

valgrind: 
	g++ -g -o bin/ejercicio5 src/main.cpp src/MatrizDispersa.cpp src/Valor.cpp  -Iinclude
	valgrind --leak-check=full --track-origins=yes ./bin/ejercicio5

$(OBJ)/Valor.o: $(INCLUDE)/Valor.h $(SRC)/Valor.cpp
	g++ -c -o $(OBJ)/Valor.o $(SRC)/Valor.cpp -I$(INCLUDE)

$(OBJ)/MatrizDispersa.o: $(INCLUDE)/MatrizDispersa.h $(INCLUDE)/Valor.h $(SRC)/MatrizDispersa.cpp
	g++ -c -o $(OBJ)/MatrizDispersa.o $(SRC)/MatrizDispersa.cpp -I$(INCLUDE)

$(OBJ)/main.o: $(INCLUDE)/Valor.h $(INCLUDE)/MatrizDispersa.h $(SRC)/main.cpp
	g++ -c -o $(OBJ)/main.o $(SRC)/main.cpp -I$(INCLUDE)

$(BIN)/ejercicio5:  $(OBJ)/Valor.o $(OBJ)/MatrizDispersa.o $(OBJ)/main.o 
	g++ -o $(BIN)/ejercicio5 $(OBJ)/main.o  $(OBJ)/MatrizDispersa.o $(OBJ)/Valor.o -I$(INCLUDE)
