HDIR = include
CPPDIR = src
ODIR = obj

ARCHIVOS = DTRefer DTFecha Publicacion Investigador Libro PaginaWeb ArticuloRevista

all: main

MODULOS = $(ARCHIVOS)

HS   = $(MODULOS:%=$(HDIR)/%.h)
CPPS = $(MODULOS:%=$(CPPDIR)/%.cpp))
OS   = $(MODULOS:%=$(ODIR)/%.o)

OBJETOS = DTRefer.o DTFecha.o Publicacion.o Investigador.o Libro.o PaginaWeb.o ArticuloRevista.o

CC = g++

FUENTES = DTRefer.cpp DTRefer.h \ DTFecha.cpp DTFecha.h \ Publicacion.cpp Publicacion.h \ Investigador.cpp Investigador.h \
	Libro.cpp Libro.h \ PaginaWeb.cpp PaginaWeb.h \ArticuloRevista.cpp ArticuloRevista.h

OPCIONES = -std=c++17 -Wall -Wextra -I$(HDIR)

$(ODIR)/%.o: %.cpp $(CPPS)
	$(CC) -o $@ $< $(OPCIONES)

