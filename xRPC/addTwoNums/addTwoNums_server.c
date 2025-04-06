#include "addTwoNums.h"

int * addtwonums_1_svc(operandos *argp, struct svc_req *rqstp){

    static int result;

    printf("Requisição de adição para %d e %d\n", argp->a, argp->b);

    result = argp->a + argp->b;
    return (&result);

}