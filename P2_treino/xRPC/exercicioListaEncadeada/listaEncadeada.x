struct list {
    int num;
    list* prox;
};

typedef list elem;


program PROG {

    version VERSION {

        string PRINT(void) = 1;
        int SUM(void) = 2;
        void ADD_LAST_ELEM(elem) = 3;
        void DELETE_LAST_ELEM(void) = 4;

    } = 100;

} = 55555555;

