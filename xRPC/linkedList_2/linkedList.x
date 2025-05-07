struct listaEncadeada {
    int valor;
    listaEncadeada* prox;
};  
typedef listaEncadeada* lista;

program LISTA_PROG {

    version LISTA_VERSAO {
        string IMPRIME(lista) = 1;
        int SOMAL(void) = 2;
    } = 100;

} = 55555555;