PROG = execute
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic
OBJS = main.o sapo.o pista.o criarpista.o criarSapo.o pistaescolhida.o iniciarcorrida.o escreverarquivo.o lerarquivo.o menu.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o bin/$(PROG)
	mv *.o build/

main.o :
	$(CC) $(CPPFALGS) -c src/main.cpp

menu.o : include/menu.hpp
	$(CC) $(CPPFALGS) -c src/menu.cpp

sapo.o : include/sapo.hpp
	$(CC) $(CPPFLAGS) -c src/sapo.cpp

pista.o : include/pista.hpp
	$(CC) $(CPPFLAGS) -c src/pista.cpp

criarpista.o : include/criarpista.hpp
	$(CC) $(CPPFLAGS) -c src/criarpista.cpp

criarSapo.o : include/criarSapo.hpp
	$(CC) $(CPPFLAGS) -c src/criarSapo.cpp

pistaescolhida.o : include/pistaescolhida.hpp
	$(CC) $(CPPFLAGS) -c src/pistaescolhida.cpp

iniciarcorrida.o : include/iniciarcorrida.hpp
	$(CC) $(CPPFLAGS) -c src/iniciarcorrida.cpp

escreverarquivo.o : include/escreverarquivo.hpp
	$(CC) $(CPPFLAGS) -c src/escreverarquivo.cpp

lerarquivo.o : include/lerarquivo.hpp
	$(CC) $(CPPFLAGS) -c src/lerarquivo.cpp
	
clean:
	rm -f build/*.o
