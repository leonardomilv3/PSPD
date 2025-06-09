#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

#define MAX 1000000


int main(){


    long int vet[MAX], soma=0;

    //Inicializa vetor
    for(int i=0; i < MAX; i++){
        vet[i] = 1;
    }

    // Região Paralela
    #pragma omp parallel shared(vet, soma) 
    {
        int max_threads = omp_get_num_threads();
        int thread_num = omp_get_thread_num();

        int soma_local = 0;
        
        // Cálculo do Offset
        int offset = ( MAX / max_threads ); 


        int begin = thread_num * offset; 
        int end = ( thread_num == max_threads-1 ) ? MAX : begin + offset ;

        
        printf("Thread: %d/%d, offset: %d\n", thread_num, max_threads, offset);


        for (size_t i = begin; i < end; i++)
        {
            soma_local += vet[i]; 
        }
        

        #pragma omp critical
        {
            soma += soma_local;
        }
    }

    printf("Soma : %ld\n", soma);

    return 0;
}
