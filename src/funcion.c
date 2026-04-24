#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include"../includes/list.h"

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
    these procediment check the the matix
    is valid and have correct relations
    vertex/edge
 */
int check_matix_validation(char ***element, int file, int colums) {
    for(int i = 0; i < file; i++) {
        int count = 0;
        for(int j = 0; j < colums; j++) {
            if (*element[i][j] == '1') {
                count++;
                if (count >= 3) {
                    printf("La matriz no es valida\n");
                    return -1;
                } 
            } 
        }
    }
    printf("La matriz es valida\n");
    return 0;
}

/*theory of graphes*/
void graph_function(char **data_graph) {
    int f,c;//matrix size (vertex*edges)
    printf("GRAPH FUNCTION RUN\n");
    printf("G=(V;A;\u03C6)\n");
    char *text = malloc(30 * sizeof(char)); 
    strcpy(text, "texto partido en partes con C");

    //checking the repherense is NULL or not to charger the text
    if (data_graph != NULL && *data_graph != NULL && **data_graph != '\0') { 
        size_t new_size = strlen(*data_graph) + 1;
        char *temp =(char *)realloc(text,new_size);
        if (temp != NULL) {
            text = temp;
            strcpy(text, *data_graph);
        }
    }
    printf("matrix load: %s\n\n",*data_graph);
    /*
        information that is necesary to 
        crete the matix
    */
    char *first_tokens = strtok(text,"x");
    if (first_tokens) f = atoi(first_tokens);

    first_tokens = strtok(NULL,"_");
    if (first_tokens) c = atoi(first_tokens);
    

    //define matrix model
    // reserv memory to the rows pointers 
    char **matrix = (char**)malloc(f * sizeof(char *));
    //and now doing the same to the cols pointers
    for (int i = 0; i < f; i++) {
        matrix[i] = (char*)malloc(c * sizeof(char));
    } 
    

    char *vertex_char = strtok(NULL,",");//delete this simbol
    /*
        remove the residual char '['
        next load values in the matrix tipe
        to use how map
    */
    memmove(vertex_char, vertex_char + 1, strlen(vertex_char));
    for (int i = 0; i < f; i++) {       
        for(int j = 0; j < c; j++) {
            if (vertex_char != NULL) {
                matrix[i][j] = vertex_char[0]; 
            } 
            printf("%s ,",vertex_char);
            vertex_char = strtok(NULL,",");
        }
        printf("\n");
    }

    //check the matix is valid 
    if(check_matix_validation(&matrix,f,c) == -1) { 
        exit(1); 
    } else {//if is valid make the graphe
        struct vertex *vert;
        init_struct_GDT(&vert);
        construction_GDT(&vert,&matrix,f,c);
    }


    for (int i = 0; i < f; i++) free(matrix[i]);
    free(matrix);
    free(text);
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
