#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
}
node;


int main (void) {
    /*
    int *list = malloc(3 * sizeof(int));
    
    if (list == NULL) {
        return 1;
    }
    
    list[0] = 1;
    (list+1) = 2;
    list[1] = 2;
    list[2] = 3;
    
    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL) {
        free(list);
        return 1;
    }
    
    tmp[3] = 4;
    
    list = tmp;
    
    for (int i = 0; i < 4; i++) {
        printf("%i\n", list[i]);
    }
    
    free(list); */


    node *list = NULL;
    
    node *n = malloc(sizeof(node));
    if (n == NULL) {
        return 1;
    }
    n->number = 1;
    n->next = NULL;
    list = n;
    
    n = malloc(sizeof(node));
    if (n == NULL) {
        free(list);
        return 1;
    }
    n->number = 2;
    n->next = NULL;
    list->next = n;
    
     n = malloc(sizeof(node));
    if (n == NULL) {
        free(list->next);
        free(list);
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n;
    
    for (node *tmp = list; tmp != NULL; tmp = tmp->next) {
        printf("%i\n", tmp->number);
    }
    while (list!=NULL) {
        node *tmp = list->next;
        free(list);
        list = tmp
    }
}