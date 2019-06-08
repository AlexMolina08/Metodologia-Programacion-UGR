OBJ=obj
BIN=bin
SRC=src
INCLUDE=include

all:$(BIN)/ejercicio4

clean:
	rm obj/*.o
	echo "--Se han limpiado los archivos temporales--"

mrproper:clean
	rm bin/ejercicio4
	echo "--Se ha borrado el ejecutable--"

$(OBJ)/Lista.o: $(SRC)/Lista.cpp $(INCLUDE)/Lista.h 
	g++ -c -o $(OBJ)/Lista.o $(SRC)/Lista.cpp -I./$(INCLUDE)

$(OBJ)/Celda.o: $(SRC)/Celda.cpp $(INCLUDE)/Celda.h 
	g++ -c -o $(OBJ)/Celda.o $(SRC)/Celda.cpp -I./$(INCLUDE)

$(OBJ)/ejercicio4.o: $(SRC)/ejercicio4.cpp $(INCLUDE)/Celda.h $(INCLUDE)/Lista.h
	g++ -c -o $(OBJ)/ejercicio4.o $(SRC)/ejercicio4.cpp -I./$(INCLUDE)

$(BIN)/ejercicio4: $(OBJ)/ejercicio4.o $(OBJ)/Celda.o $(OBJ)/Lista.o  
	g++ -o $(BIN)/ejercicio4 $(OBJ)/Lista.o  $(OBJ)/Celda.o $(OBJ)/ejercicio4.o -I./$(INCLUDE)
