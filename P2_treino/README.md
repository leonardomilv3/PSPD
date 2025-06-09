# P2


## 1. MPI

Programar com múltiplos processos, formando-se um cluster.

### 1.1 Compilar


### 1.2 Comandos


### 1.3 Exercícios


- Exercício Fractal


offset na hora de gravar os dados no mesmo arquivo (thread-safe as rotinas de abertura de arquivo)


COLOQUE O CODIGO AQUI


## 2. OpenMP


Programar com mútiplas threads.


### 2.1 Compilar


Compilar:

```bash
gcc -fopenmp foo.c -o foo.bin
```

Configurar quantidade de threads:

- export OMP_NUM_THREADS=<qtd_threads> 
- echo $OMP_NUM_THREADS



### 2.2 Comandos


**HEADER**


- #include <omp.h>


**Métodos OMP**


- omp_get_max_threads()
- omp_get_num_threads() 
- omp_get_thread_num()


**PRIMITIVAS**


SEND
RECV


BCAST


## #pragma omp parallel


#pragma omp parallel 
{
    // codigo paralelo aqui
}


## #pragma omp parallel for


#pragma omp parallel for
    for (int i=0 ; i<size; i++)
        #pragama omp critical
        soma_local += v[i];



## Sincronização de threads


## #pragama omp critical


- Resposável por criar uma Região critica que apenas 1 thread acessa por vez.
- Várias comandos podem ser executados dentro da Região

## #pragma omp atomic

- Resposável por criar uma Região critica que apenas 1 thread acessa por vez.
- Otimizado para comandos simples: soma, subtração.


## Operações com threads

### #pragma omp reduction

#pragma omp parallel for reduction (+: soma_total)
for (int i=0; i < MAX; i++){
    c[i] = a[i] + b[i];
    soma_total += c[i]
}


## #pragma omp single


## #pragma omp shared

## #pragma omp private

## #pragma omp schedule

## #pragma omp static

## #pragma omp dynamic





### 2.3 Exercícios


- Exercício Fractal


COLOQUE O CODIGO AQUI



## 3. xRPC (Remote Procedure Call)


Programar em sistemas distribuídos.



### 3.1 Compilar


- rpcgen -a <foo.x>

Renomear Makefile.foo para Makefile

E no Makefile colocar a flag de linkagem do xrpc:


```bash
LDLIBS += -ltirpc
```

### 3.2 Executar



- Cliente:

./foo_client localhost

- Servidor:

./foo_server


### 3.3 Exercícios


- Exercício Lista encadeado


[Lista Encadeada](./xRPC/exercicioListaEncadeada/listaEncadeada.x)



