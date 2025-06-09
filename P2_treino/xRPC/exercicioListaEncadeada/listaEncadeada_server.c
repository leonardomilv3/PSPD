#include "listaEncadeada.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Lista global do servidor
static elem* head = NULL;

char **
print_100_svc(void *argp, struct svc_req *rqstp) {
    static char result[1024];
    static char *result_ptr = result;
    result[0] = '\0';

    if (head == NULL) {
        strcpy(result, "(lista vazia)");
        return &result_ptr;
    }

    elem* current = head;
    while (current != NULL) {
        char buffer[32];
        sprintf(buffer, "%d ", current->num);
        strcat(result, buffer);
        current = current->prox;
    }

    return &result_ptr;
}

int *
sum_100_svc(void *argp, struct svc_req *rqstp) {
    static int result = 0;
    result = 0;

    elem* current = head;
    while (current != NULL) {
        result += current->num;
        current = current->prox;
    }

    return &result;
}

void *
add_last_elem_100_svc(elem *argp, struct svc_req *rqstp) {
    static int dummy;

    elem* new_node = (elem*) malloc(sizeof(elem));
    new_node->num = argp->num;
    new_node->prox = NULL;

    if (head == NULL) {
        head = new_node;
    } else {
        elem* current = head;
        while (current->prox != NULL)
            current = current->prox;
        current->prox = new_node;
    }

    return (void *)&dummy;
}

void *
delete_last_elem_100_svc(void *argp, struct svc_req *rqstp) {
    static int dummy;

    if (head == NULL) return (void *)&dummy;

    if (head->prox == NULL) {
        free(head);
        head = NULL;
    } else {
        elem* prev = head;
        elem* current = head->prox;

        while (current->prox != NULL) {
            prev = current;
            current = current->prox;
        }

        prev->prox = NULL;
        free(current);
    }

    return (void *)&dummy;
}
