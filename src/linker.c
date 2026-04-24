#include "../includes/linker.h"
#include <stdlib.h>

void init_struct_GDT(struct vertex **v) {
    *v = NULL;
}

void construction_GDT(struct vertex **v, char ***matrix,int file, int colums) {
    struct vertex *aux[file];//create all vertex necesary
    for (int i = 0; i < file; i++) {
        for (int j = 0; j < colums; j++) {
            /*
                linker
            */
            
            int count = 0;
            int pos = 0;
            /*make the first vertex*/
            struct vertex *ver_new = (struct vertex*)malloc(sizeof(struct vertex));
            ver_new->vertex_name = (char*)malloc(20 * sizeof(char));//set size of name
            ver_new->edge = NULL;//null pointer to next vertex
            /*
                set the name of vertex
            */
            sprintf(ver_new->vertex_name, "vertex %d", i);/*name vertex*/
                
            for (int k = 0; k < colums; k++) {
                if ((*matrix)[i][k] == '1') {
                    count++;
                }   
            }
            ver_new->edge = (struct vertex**)malloc(count * sizeof(struct vertex*));
            while(count > pos) {
                ver_new->edge[pos] = (struct vertex*)malloc(sizeof(struct vertex));
                ver_new->edge[pos]->vertex_name = (char*)malloc(20 * sizeof(char));
                sprintf(ver_new->edge[pos]->vertex_name, "vertex %d", pos);
                ver_new->edge[pos]->edge = NULL;
                pos++;
            }
            *v = ver_new;
            aux[i] = ver_new;
        }
    }
}