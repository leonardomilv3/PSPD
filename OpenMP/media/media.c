#include<stdio.h>
#include<omp.h>


#define MAX 1000

int main(){

    int nthreads;
    int v[MAX];
    int total=0;

    for (int i=0; i<MAX; i++){
        v[i]=1;
    }


    #pragma omp parallel shared(total, v)
    {
        int soma_local=0;
        #pragma omp for
        for (size_t i = 0; i < MAX; i++)        
            soma_local += v[i];
        
        // semáfora para somar 
        #pragma omp critical
        total += soma_local;
    } // fim area paralela

    
    printf("Total: %d\n", total);


    return 0;
}