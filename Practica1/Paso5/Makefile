OBJ=obj
BIN=bin
LIB=lib
SRC=src
INCLUDE=include

all:bin/principal

clean:
	echo "--Limpieza de los archivos temporales--"
	rm obj/*.o lib/*.a

mrproper:clean
	rm bin/principal

$(OBJ)/punto.o: $(INCLUDE)/punto.h $(SRC)/punto.cpp
	g++ -c -o $(OBJ)/punto.o $(SRC)/punto.cpp -I./$(INCLUDE)

$(OBJ)/circulo.o: $(INCLUDE)/circulo.h $(INCLUDE)/punto.h $(SRC)/circulo.cpp
	g++ -c -o $(OBJ)/circulo.o $(SRC)/circulo.cpp -I./$(INCLUDE)

$(OBJ)/utilidades.o: $(INCLUDE)/circulo.h $(INCLUDE)/punto.h $(INCLUDE)/utilidades.h $(SRC)/utilidades.cpp
	g++ -c -o $(OBJ)/utilidades.o $(SRC)/utilidades.cpp -I./$(INCLUDE)

$(LIB)/libformas.a: $(OBJ)/punto.o $(OBJ)/circulo.o $(OBJ)/utilidades.o
	ar -rsv $(LIB)/libformas.a $(OBJ)/punto.o $(OBJ)/circulo.o $(OBJ)/utilidades.o

$(OBJ)/principal.o: $(SRC)/principal.cpp $(INCLUDE)/punto.h $(INCLUDE)/circulo.h $(INCLUDE)/utilidades.h
	g++ -c -o $(OBJ)/principal.o $(SRC)/principal.cpp -I./$(INCLUDE)

$(BIN)/principal: $(OBJ)/principal.o $(LIB)/libformas.a
	g++ -L./$(LIB) -o $(BIN)/principal $(OBJ)/principal.o -lformas

