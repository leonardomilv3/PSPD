/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _ADDTWONUMS_H_RPCGEN
#define _ADDTWONUMS_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct operandos {
	int a;
	int b;
};
typedef struct operandos operandos;

#define SUM_PROG 55555555
#define SUM_VERSAO 1

#if defined(__STDC__) || defined(__cplusplus)
#define ADDTWONUMS 1
extern  int * addtwonums_1(operandos *, CLIENT *);
extern  int * addtwonums_1_svc(operandos *, struct svc_req *);
extern int sum_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ADDTWONUMS 1
extern  int * addtwonums_1();
extern  int * addtwonums_1_svc();
extern int sum_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_operandos (XDR *, operandos*);

#else /* K&R C */
extern bool_t xdr_operandos ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_ADDTWONUMS_H_RPCGEN */
