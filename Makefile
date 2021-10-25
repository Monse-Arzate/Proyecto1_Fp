G -wallCC=gcc # definir el compilador a utilizar
EXE=conv #definir el nombre del ejecutable

CDEBUG= -g - Wall #definir las banderas de depuracion

CSTD= -std=c99 #definir el estandar del lenguaje a utilizar 

CFLAGS = -Wno-deprecated-register -O0 $(CDEBUG) $(CSTD)

COBJ = main  funciones 

Files = $(addsuffix .c, $(COBJ))
OBJ = $(addsuffix .o, $(COBJ))

CLEANKIST = $(addsuffix .o, $(COBJ) )

.PHONY: all
all: wc

wc: $(FILES)
    $(MAKE) $(OBJS)
	$(CC)  $(CFLAGS) -o $(EXE) $(OBJS) $(CLIBS)

	.PHONY: clean 
	clean: 
	      rm -rf $(CLEANLIST)