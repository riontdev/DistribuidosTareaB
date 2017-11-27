/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "suma.h"

char **
suma_1_svc(sumandos *argp, struct svc_req *rqstp)
{

	static char * result;
	srand(time(NULL));
	/*
	 * insert server code here
	 */
	printf("Server running...\n");
	int LEN = argp->num;
	int i=0,j=0;
	printf("Recibi el numero: %d Creare una matriz de ese tamano \n", LEN);
	//MATRICES DINAMICAS
	int **M,**N,**R;
	//RESERVACION DE ESPACOS EN FILAS
	M = (int **)malloc (LEN*sizeof(int *));
	N = (int **)malloc (LEN*sizeof(int *));
	R = (int **)malloc (LEN*sizeof(int *));
	//RESERVACION DE ESPACOS EN COLUMNAS
	for (i=0;i<LEN;i++) {
		M[i] = (int *) malloc (LEN*sizeof(int));
		N[i] = (int *) malloc (LEN*sizeof(int));
		R[i] = (int *) malloc (LEN*sizeof(int));
	}
	//CALCULO y RESULTADO
	for (i = 0; i < LEN; i++)
	{
		for (j = 0; j < LEN; j++)
		{
		  M[i][j] = rand() % LEN;
		  N[i][j] = rand() % LEN;
		  R[i][j] = M[i][j] + N[i][j];
		  printf("%d ", R[i][j]);
		}
		printf("\n");
	}
	/*
		for (i = 0; i < 2; i++)
		{
			for (j = 0; i < 2; j++)
			{
			 printf("%d ", M[i][j]);
			}
			printf("\n");
		}*/
	asprintf(&result, "Server Found: %d", argp->num);
	free(M);
	free(N);
	free(R);
	return(&result);
}
