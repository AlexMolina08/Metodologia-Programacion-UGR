OBJ=obj
BIN=bin
SRC=src
INCLUDE=include

all:$(BIN)/ejercicio2

clean:
	rm obj/*.o
	echo "--Se han limpiado los archivos temporales--"

mrproper:clean
	rm bin/ejercicio2
	echo "--Se ha borrado el ejecutable--"

$(OBJ)/utilidades.o: $(SRC)/utilidades.cpp $(INCLUDE)/utilidades.h $(INCLUDE)/Valor.h
	g++ -c -o $(OBJ)/utilidades.o $(SRC)/utilidades.cpp -I./$(INCLUDE)

$(OBJ)/ejercicio2.o: $(SRC)/ejercicio2.cpp $(INCLUDE)/Valor.h $(INCLUDE)/utilidades.h
	g++ -c -o $(OBJ)/ejercicio2.o $(SRC)/ejercicio2.cpp -I./$(INCLUDE)

$(BIN)/ejercicio2: $(OBJ)/utilidades.o $(OBJ)/ejercicio2.o 
	g++ -o $(BIN)/ejercicio2 $(OBJ)/utilidades.o $(OBJ)/ejercicio2.o -I./$(INCLUDE)
