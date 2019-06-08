OBJ=obj
BIN=bin
SRC=src
INCLUDE=include

all: $(BIN)/ejercicio6
clean:
	rm obj/*.o
	echo "--Se han limpiado los archivos temporales--"

mrproper:clean
	rm bin/ejercicio6
	echo "--Se ha borrado el ejecutable ejercicio6--"

valgrind: 
	g++ -g -o bin/ejercicio6 src/main.cpp src/Skyline.cpp src/utilidades.cpp  -Iinclude
	valgrind --leak-check=full --track-origins=yes ./bin/ejercicio6

$(OBJ)/utilidades.o: $(INCLUDE)/utilidades.h $(SRC)/utilidades.cpp
	g++ -c -o $(OBJ)/utilidades.o $(SRC)/utilidades.cpp -I$(INCLUDE)


$(OBJ)/Skyline.o: $(INCLUDE)/Skyline.h $(SRC)/Skyline.cpp
	g++ -c -o $(OBJ)/Skyline.o $(SRC)/Skyline.cpp -I$(INCLUDE)

$(OBJ)/main.o: $(INCLUDE)/utilidades.h $(INCLUDE)/Skyline.h $(SRC)/main.cpp
	g++ -c -o $(OBJ)/main.o $(SRC)/main.cpp -I$(INCLUDE)

$(BIN)/ejercicio6: $(OBJ)/utilidades.o  $(OBJ)/Skyline.o $(OBJ)/main.o 
	g++ -o $(BIN)/ejercicio6 $(OBJ)/main.o $(OBJ)/utilidades.o $(OBJ)/Skyline.o  -I$(INCLUDE)
