HDIR = include
CPPDIR = src
ODIR = obj

ARCHIVOS = DTRefer DTFecha Publicacion Investigador Libro PaginaWeb ArticuloRevista
MODULOS = $(ARCHIVOS)

HS   = $(MODULOS:%=$(HDIR)/%.h)
CPPS = $(MODULOS:%=$(CPPDIR)/%.cpp)
OS   = $(MODULOS:%=$(ODIR)/%.o)

CC = g++
OPCIONES = -std=c++98 -Wall -Wextra -I$(HDIR)

all: main

main: main.o $(OS)
	$(CC) -o main main.o $(OS) $(OPCIONES)

main.o: main.cpp
	$(CC) $(OPCIONES) -c main.cpp -o main.o

$(ODIR)/%.o: $(CPPDIR)/%.cpp $(HDIR)/%.h
	$(CC) $(OPCIONES) -c $< -o $@

clean:
	rm -f $(ODIR)/.o.o main