OBJ=obj
BIN=bin
SRC=src
INCLUDE=include

all: $(BIN)/ejercicio7
clean:
	rm obj/*.o
	echo "--Se han limpiado los archivos temporales--"

mrproper:clean
	rm bin/ejercicio7
	echo "--Se ha borrado el ejecutable ejercicio7--"

valgrind: 
	g++ -g -o bin/ejercicio7 src/main.cpp src/Precuencias.cpp src/utilidades.cpp src/Pareja.cpp  -Iinclude
	valgrind --leak-check=full --track-origins=yes ./bin/ejercicio7

$(OBJ)/utilidades.o: $(INCLUDE)/utilidades.h $(SRC)/utilidades.cpp
	g++ -c -o $(OBJ)/utilidades.o $(SRC)/utilidades.cpp -I$(INCLUDE)

$(OBJ)/Pareja.o: $(INCLUDE)/Pareja.h $(SRC)/Pareja.cpp
	g++ -c -o $(OBJ)/Pareja.o $(SRC)/Pareja.cpp -I$(INCLUDE)

$(OBJ)/Precuencias.o: $(INCLUDE)/Precuencias.h $(SRC)/Precuencias.cpp
	g++ -c -o $(OBJ)/Precuencias.o $(SRC)/Precuencias.cpp -I$(INCLUDE)

$(OBJ)/main.o: $(INCLUDE)/utilidades.h $(INCLUDE)/Precuencias.h $(SRC)/main.cpp
	g++ -c -o $(OBJ)/main.o $(SRC)/main.cpp -I$(INCLUDE)

$(BIN)/ejercicio7: $(OBJ)/utilidades.o  $(OBJ)/Precuencias.o $(OBJ)/Pareja.o $(OBJ)/main.o  
	g++ -o $(BIN)/ejercicio7 $(OBJ)/main.o $(OBJ)/utilidades.o $(OBJ)/Precuencias.o $(OBJ)/Pareja.o  -I$(INCLUDE)
