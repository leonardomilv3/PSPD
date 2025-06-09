#include <stdio.h>
#include <stdlib.h>
#include "listaEncadeada.h"

int imprimeMenu() {
    printf("\n=== Serviços Lista Encadeada ===\n");
    printf("1 - Imprime Lista\n");
    printf("2 - Adiciona elemento\n");
    printf("3 - Remove último elemento\n");
    printf("4 - Soma Lista\n");
    printf("0 - Sair do programa\n\n");
    printf("Digite o número da opção desejada: ");

    int opcao;
    scanf("%d", &opcao);
    return opcao;
}

void print_linked_list(CLIENT* clnt) {
    char** answer = print_100(NULL, clnt);
    if (answer && *answer)
        printf("Lista: %s\n", *answer);
    else
        printf("Lista vazia ou erro ao imprimir.\n");
}

void add_element_list(CLIENT* clnt) {
    int num;
    printf("Digite o número a ser adicionado na Lista: ");
    scanf("%d", &num);

    elem element;
    element.num = num;
    element.prox = NULL;

    add_last_elem_100(&element, clnt);
    printf("Elemento adicionado com sucesso!\n");
}

void delete_last_element(CLIENT* clnt) {
    delete_last_elem_100(NULL, clnt);
    printf("Último elemento removido (se existir).\n");
}

void sum_list(CLIENT* clnt) {
    int* result = sum_100(NULL, clnt);
    if (result)
        printf("Soma dos elementos da lista: %d\n", *result);
    else
        printf("Erro ao somar a lista.\n");
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s <servidor>\n", argv[0]);
        exit(1);
    }

    CLIENT* clnt = clnt_create(argv[1], PROG, VERSION, "udp");
    if (clnt == NULL) {
        clnt_pcreateerror(argv[1]);
        exit(1);
    }

    int opcao;
    do {
        opcao = imprimeMenu();
        switch (opcao) {
            case 1: print_linked_list(clnt); break;
            case 2: add_element_list(clnt); break;
            case 3: delete_last_element(clnt); break;
            case 4: sum_list(clnt); break;
            case 0: printf("Obrigado!\n"); break;
            default: printf("Opção inválida!\n"); break;
        }
    } while (opcao != 0);

    clnt_destroy(clnt);
    return 0;
}
