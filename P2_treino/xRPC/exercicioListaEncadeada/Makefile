
# This is a template Makefile generated by rpcgen

# Parameters

CLIENT = listaEncadeada_client
SERVER = listaEncadeada_server

SOURCES_CLNT.c = 
SOURCES_CLNT.h = 
SOURCES_SVC.c = 
SOURCES_SVC.h = 
SOURCES.x = listaEncadeada.x

TARGETS_SVC.c = listaEncadeada_svc.c listaEncadeada_server.c listaEncadeada_xdr.c 
TARGETS_CLNT.c = listaEncadeada_clnt.c listaEncadeada_client.c listaEncadeada_xdr.c 
TARGETS = listaEncadeada.h listaEncadeada_xdr.c listaEncadeada_clnt.c listaEncadeada_svc.c listaEncadeada_client.c listaEncadeada_server.c

OBJECTS_CLNT = $(SOURCES_CLNT.c:%.c=%.o) $(TARGETS_CLNT.c:%.c=%.o)
OBJECTS_SVC = $(SOURCES_SVC.c:%.c=%.o) $(TARGETS_SVC.c:%.c=%.o)
# Compiler flags 

CFLAGS += -g 
LDLIBS += -ltirpc
RPCGENFLAGS = 

# Targets 

all : $(CLIENT) $(SERVER)

$(TARGETS) : $(SOURCES.x) 
	rpcgen $(RPCGENFLAGS) $(SOURCES.x)

$(OBJECTS_CLNT) : $(SOURCES_CLNT.c) $(SOURCES_CLNT.h) $(TARGETS_CLNT.c) 

$(OBJECTS_SVC) : $(SOURCES_SVC.c) $(SOURCES_SVC.h) $(TARGETS_SVC.c) 

$(CLIENT) : $(OBJECTS_CLNT) 
	$(LINK.c) -o $(CLIENT) $(OBJECTS_CLNT) $(LDLIBS) 

$(SERVER) : $(OBJECTS_SVC) 
	$(LINK.c) -o $(SERVER) $(OBJECTS_SVC) $(LDLIBS)

clean:
	 $(RM) *.o listaEncadeada_client listaEncadeada_server

