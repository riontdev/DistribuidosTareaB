gcc -g -DRPC_SVC_FG -c -o suma_clnt.o suma_clnt.c
gcc -g -DRPC_SVC_FG -c -o suma_client.o suma_client.c
gcc -g -DRPC_SVC_FG -c -o suma_xdr.o suma_xdr.c
gcc -g -DRPC_SVC_FG -o suma_client suma_clnt.o suma_client.o suma_xdr.o 
gcc -g -DRPC_SVC_FG -c -o suma_svc.o suma_svc.c
gcc -g -DRPC_SVC_FG -c -o suma_server.o suma_server.c
gcc -g -DRPC_SVC_FG -o suma_server suma_svc.o suma_server.o suma_xdr.o
echo 'Compilacion terminada'