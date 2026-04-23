
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>


/*
    To create the graphes, digraphes or trees,
    this code using linked list method, each vertex
    has interlinked to pointers simulating the edges(the ponters are the edges)
*/


/*vertex*/
struct vertex {
    struct vertex **edge; //this pointer is a representation of a edge
    char *vertex_name; //name of vertex type data
};

//init element vertex
void init_struct_GDT(struct vertex **v);
/*crete the struct that the matrix represent*/
void construction_GDT(struct vertex **v);
