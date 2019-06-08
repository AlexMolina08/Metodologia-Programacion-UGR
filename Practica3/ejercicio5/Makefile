OBJ=obj
BIN=bin
SRC=src
INCLUDE=include

all:$(BIN)/ejercicio5

clean:
	rm obj/*.o
	echo "--Se han limpiado los archivos temporales--"

mrproper:clean
	rm bin/ejercicio5
	echo "--Se ha borrado el ejecutable--"

$(OBJ)/Celda.o: $(SRC)/Celda.cpp $(INCLUDE)/Celda.h 
	g++ -c -o $(OBJ)/Celda.o $(SRC)/Celda.cpp -I./$(INCLUDE)

$(OBJ)/Lista.o: $(SRC)/Lista.cpp $(INCLUDE)/Lista.h 
	g++ -c -o $(OBJ)/Lista.o $(SRC)/Lista.cpp -I./$(INCLUDE)

$(OBJ)/ejercicio5.o: $(SRC)/ejercicio5.cpp $(INCLUDE)/Celda.h $(INCLUDE)/Lista.h
	g++ -c -o $(OBJ)/ejercicio5.o $(SRC)/ejercicio5.cpp -I./$(INCLUDE)

$(BIN)/ejercicio5: $(OBJ)/Celda.o $(OBJ)/Lista.o $(OBJ)/ejercicio5.o 
	g++ -o $(BIN)/ejercicio5 $(OBJ)/ejercicio5.o $(OBJ)/Celda.o $(OBJ)/Lista.o -I./$(INCLUDE)
