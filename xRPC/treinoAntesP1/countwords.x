const MAX_WORD_LENGHT = 100;
const MAX_WORD = 100;


struct wordCounted {
    char word[MAX_WORD_LENGHT];
    int count;
};

typedef wordCounted* words;


program WORD_PROGRAM {

    version WORD_VERSAO {
        string IMPRIME(words) = 1;
        void ADICIONA(words) = 2;
    } = 1;

} = 5555555;











