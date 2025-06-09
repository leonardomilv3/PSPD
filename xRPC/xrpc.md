# xRPC

*RPC - REMOTE PROCEDURE CALL*

## Definição RPC e gRPC

### RPC (REMOTE PROCEDURE CALL)

É um protocolo de comunicação, que permite que um **cliente solicite serviços para um servidor**, sendo que ambos estão em redes diferentes.

O RPC é importante pois consegue, através de interfaces (stubs) diferentes (cliente-servidor), realizar **comunicação para sistemas distribuídos**.

Um exemplo de uma visão macro do processo de comunicação entre um cliente e um servidor é mostrado na Figura 1.

<!-- ![image](./assets/rpc_cliente_servidor.png "Caption") -->

<figure>
  <img src="./assets/rpc_cliente_servidor.png" alt="My image caption">
  <figcaption >Figura 1: Visão macro comunicação RPC cliente-servidor.</figcaption>
</figure>

Enquanto que um exemplo prático de chamada de subrotina entre um cliente e um servidor é mostrado na Figura 2.


<figure>
  <img src="./assets/rpc_exemplo.png" alt="My image caption">
  <figcaption >Figura 2: Visão macro comunicação RPC cliente-servidor.</figcaption>
</figure>



#### Como compilar o xRPC


```bash
rpcgen -a nomeDaInterfaceRPC.x


gcc -o nomeObjeto nome_servidor.c nome_servidor_srv.c nome_xrpc.c -ltirpc

gcc -o nomeObjeto nome_cliente.c nome_cliente_clnt.c nome_xrpc.c -lnsl


```

### Passos no RPC

- 1 : registro - servidor "registra" o procedimento, tipo de parâmetro, localização a ser armazenada os métodos.
0  : bind

### gRPC 

É uma estrutura de comunicação, que **permite a troca de dados**, entre serviços, aplicativos e dispositivos.
(**gRPC**)





### Daemon

processo que roda em background 
não atua direto no processo
chama outro processo para atuar com ele
não possui terminal
