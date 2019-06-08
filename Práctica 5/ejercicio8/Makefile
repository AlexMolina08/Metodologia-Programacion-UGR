OBJ=obj
BIN=bin
SRC=src
INCLUDE=include

all: $(BIN)/ejercicio8
clean:
	rm obj/*.o
	echo "--Se han limpiado los archivos temporales--"

mrproper:clean
	rm bin/ejercicio8
	echo "--Se ha borrado el ejecutable ejercicio8--"

valgrind: 
	g++ -g -o bin/ejercicio8 src/ejercicio8.cpp src/Menu.cpp src/utilidades.cpp   -Iinclude
	valgrind --leak-check=full --track-origins=yes ./bin/ejercicio8

$(OBJ)/utilidades.o: $(INCLUDE)/utilidades.h $(SRC)/utilidades.cpp
	g++ -c -o $(OBJ)/utilidades.o $(SRC)/utilidades.cpp -I$(INCLUDE)


$(OBJ)/Menu.o: $(INCLUDE)/Menu.h $(SRC)/Menu.cpp
	g++ -c -o $(OBJ)/Menu.o $(SRC)/Menu.cpp -I$(INCLUDE)

$(OBJ)/ejercicio8.o: $(INCLUDE)/utilidades.h $(INCLUDE)/Menu.h $(SRC)/ejercicio8.cpp
	g++ -c -o $(OBJ)/ejercicio8.o $(SRC)/ejercicio8.cpp -I$(INCLUDE)

$(BIN)/ejercicio8: $(OBJ)/utilidades.o  $(OBJ)/Menu.o $(OBJ)/ejercicio8.o  
	g++ -o $(BIN)/ejercicio8 $(OBJ)/ejercicio8.o $(OBJ)/utilidades.o $(OBJ)/Menu.o  -I$(INCLUDE)
