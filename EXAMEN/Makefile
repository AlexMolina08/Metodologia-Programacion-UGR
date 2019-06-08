OBJ=obj
BIN=bin
LIB=lib
SRC=src
INCLUDE=include

all:bin/examen

clean:
	echo "--Limpieza de los archivos temporales--"
	rm obj/*.o lib/*.a

cleanBin:clean
	rm bin/principal

$(OBJ)/ex.o: $(INCLUDE)/GrupoTuristas.h $(SRC)/ex.cpp
	g++ -c -o $(OBJ)/ex.o $(SRC)/ex.cpp -I./$(INCLUDE)

$(OBJ)/GrupoTuristas.o: $(INCLUDE)/GrupoTuristas.h $(SRC)/GrupoTuristas.cpp
	g++ -c -o $(OBJ)/GrupoTuristas.o $(SRC)/GrupoTuristas.cpp -I./$(INCLUDE)

$(BIN)/examen: $(OBJ)/ex.o $(OBJ)/GrupoTuristas.o
	g++ -o $(BIN)/examen $(OBJ)/ex.o $(OBJ)/GrupoTuristas.o

