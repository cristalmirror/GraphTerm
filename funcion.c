#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

/*vertex*/
struct vertex {
    struct vertex *next;
    char *edge;
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


/*theory of graphes*/
void graph_function(char **data_graph) {
    char text[]= "texto partido en partes con C";

    //checking the repherense is NULL or not to charger the text
    if (data_graph != NULL && *data_graph != NULL && **data_graph != '\0') { 
        strcpy(text, *data_graph);
    }

    char *token = strtok(text,"_");
    while (token) {
        printf("%s\n",token);
        token = strtok(NULL," ");
    }
    
}

/*void digraph_function(char &graph) {

}

void tree_function(char &graph) {

}*/