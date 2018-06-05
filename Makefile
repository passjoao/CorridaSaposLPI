PROG = sapos
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic
OBJS = main.o sapo.o pista.o criarpista.o criarSapo.o pistaescolhida.o iniciarcorrida.o escreverarquivos.o lerarquivos.o selecionarSapo.o menu.o

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

escreverarquivos.o : include/escreverarquivos.hpp
	$(CC) $(CPPFLAGS) -c src/escreverarquivos.cpp

lerarquivos.o : include/lerarquivos.hpp
	$(CC) $(CPPFLAGS) -c src/lerarquivos.cpp

selecionarSapo.o : include/selecionarSapo.hpp
	$(CC) $(CPPFLAGS) -c src/selecionarSapo.cpp
	
clean:
	rm -f build/*.o