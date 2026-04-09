#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

/*vertex*/
struct vertex {
    struct vertex **edge; //this pointer is a representation of a edge
    char *vertex_name; //name of vertex type data
};


void saludar() {
    printf("¡Hola desde la función C!\n");
}

void despedir() {
    for(int i = 5; i >= 1; i--) {
        printf("[==================]\n");
        printf("Adios desde C en %i\n",i);
        sleep(1);
    }
    printf("Adios a todos desde C, este ingerto de lenguajes los quiere\n\n");
}

//option to process the degree form of input args
void degree_option(char ***element) {
    printf("Degree option runing now...\n");
}

void matrix_option(char ***element) {
    printf("Matix option runing now...\n");
}

/*
    To create the graphes, digraphes or trees,
    this code using linked list method, each vertex
    has interlinked to pointers simulating the edges(the ponters are the edges)
*/

//init element vertex
void init_struct_GDT(struct vertex **v) {
    *v = 0;
}

/*crete the struct that the matrix represent*/
void construction_GDT(struct vertex **v) {
    struct vertex *aux;
    struct vertex *act = (struct vertex *)malloc(sizeof(struct vertex));    
}

/*theory of graphes*/
void graph_function(char **data_graph) {
    int tam[2];
    printf("GRAPH FUNCTION RUN\n");
    printf("G=(V;A;\u03C6)\n");
    char text[]= "texto partido en partes con C";

    //checking the repherense is NULL or not to charger the text
    if (data_graph != NULL && *data_graph != NULL && **data_graph != '\0') { 
        strcpy(text, *data_graph);
    }

    char *token = strtok(text,"_");
    token = strtok(NULL,"x");

    for (int i = 0; i < 2; i++) {
        tam[i] = atom(token[i]);
    }

    while (token) {       
        token = strtok(NULL,"[");//delete this simbol
        token = strtok(NULL,"]");//delete this simbol
        
        printf("%s\n",token);
        token = strtok(NULL,",");
    }
    
}

//digraph_operation
void digraph_function(char **data_graph) {
    printf("DIGRAPH FUNCTION RUN\n");
    char text[]= "texto partido en partes con C";

    //checking the repherense is NULL or not to charger the text
    if (data_graph != NULL && *data_graph != NULL && **data_graph != '\0') { 
        strcpy(text, *data_graph);
    }

    char *token = strtok(text,",");
    while (token) {
        printf("%s\n",token);
        token = strtok(NULL,",");
    }
}

void tree_function(char **data_graph) {
    printf("TREE FUNCTION RUN\n");
    char text[]= "texto partido en partes con C";

    //checking the repherense is NULL or not to charger the text
    if (data_graph != NULL && *data_graph != NULL && **data_graph != '\0') { 
        strcpy(text, *data_graph);
    }

    char *token = strtok(text,",");
    while (token) {
        printf("%s\n",token);
        token = strtok(NULL,",");
    }
}
