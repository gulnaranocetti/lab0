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

all: programa

$(ODIR):
	mkdir -p $(ODIR)

programa: |$(ODIR) $(ODIR)/main.o $(OS)
	$(CC) -o programa $(ODIR)/main.o $(OS) $(OPCIONES)

$(ODIR)/main.o: main.cpp
	$(CC) $(OPCIONES) -c main.cpp -o $(ODIR)/main.o

$(ODIR)/%.o: $(CPPDIR)/%.cpp $(HDIR)/%.h
	$(CC) $(OPCIONES) -c $< -o $@

clean:
	rm -f $(ODIR)/*.o programa

run: all
	./programa

entrega:
	zip -r grupo21_lab0.zip $(HDIR) $(CPPDIR) Makefile
