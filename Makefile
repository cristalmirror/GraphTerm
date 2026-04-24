#compilers
CC = gcc
CXX = g++
RUSTC = rustc 

#compilation flags
CFLAGS = -Wall
CXXFLAGS = -Wall -std=c++23
LDFLAGS = -lpthread -ldl

#archive name
TARGET = ./output/hibridexe
RS_SRC = src/lib.rs
RS_LIB = ./output/librust_part.a
C_OBJ = ./output/funcion.o
CPP_OBJ = ./output/main.o
LINK_OBJ = ./output/linker.o


#debug options
.PHONY: debug
debug: CFLAGS += -g
debug: CXXFLAGS += -g
debug: RUST_FLAGS += -g
debug: $(TARGET)


# executable definitions
all: $(TARGET)



#linking code
$(TARGET): $(CPP_OBJ) $(C_OBJ) $(LINK_OBJ) $(RS_LIB)
	$(CXX) $(CPP_OBJ) $(C_OBJ) $(LINK_OBJ) $(RS_LIB) -o $(TARGET) $(LDFLAGS)

#compile static Rust lib
$(RS_LIB): $(RS_SRC)
	$(RUSTC) --crate-type=staticlib $(RS_SRC) -o $(RS_LIB)

#compile C object list
$(LINK_OBJ): src/linker.c
	$(CC) $(CFLAGS) -c src/linker.c -o $(LINK_OBJ)

#compile C object 
$(C_OBJ): src/funcion.c 
	$(CC) $(CFLAGS) -c src/funcion.c -o $(C_OBJ)

#Compile the main object (C++)
$(CPP_OBJ): src/main.cpp 
	$(CXX) $(CXXFLAGS) -c src/main.cpp -o $(CPP_OBJ)

#archive generated cleaning
clean: 
	rm -f $(RS_LIB) *.o