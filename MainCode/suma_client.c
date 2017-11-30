/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */
#include <stdio.h>
#include "suma.h"


void
programa_suma_1( char* host, int num )
{
	CLIENT *clnt;
	char * *result_1;
	sumandos  suma_1_arg;
	clnt = clnt_create(host, PROGRAMA_SUMA, VERSION_SUMA, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror(host);
		exit(1);
	}
	suma_1_arg.num = num;
	result_1 = suma_1(&suma_1_arg, clnt);
	if (result_1 == (char **) NULL) {
		clnt_perror(clnt, "call failed:");
	} else {
		printf("Resultado:\n%s", *result_1);
	}
	clnt_destroy( clnt );
}


main( int argc, char* argv[] )
{
	char *host;
int num;
        if (argc != 3) {
            printf ("usage: %s server_host num1\n", argv[0]);
            exit(1);
        }
        host = argv[1];
        if ((num = atoi(argv[2])) == 0 && *argv[2] != '0') {
            fprintf(stderr, "invalid value: %s\n", argv[2]);
            exit(1);
        }
        programa_suma_1( host, num );
}
