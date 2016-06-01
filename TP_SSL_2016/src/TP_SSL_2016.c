/*
 ============================================================================
 Name        : TP SSL 2016
 Author      : Santiago Balbiani
 Curso       :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ESTADO_ACEPTACION 1
#define FALSO 0
	// Filas son estados
	// Inicial - Invalido - EstadoFinal
	// Columnas NumeroEntero	Cero	Otro
	/*


Estados/ConjCaracteres	NumeroEntero	Cero	Otro
0	0	1	2
1	0	1	2
2	2	2	2


	*/
	int matrix[3][3] = {0,1,2,0,1,2,2,2,2};

//Obtengo la columna de la matriz que es igual al conjuntoCaracter
int getConjuntoCaracter(char carLeido){
	int conjCarac;

	//Pregunto si es un entero
	if ((isdigit(carLeido)) && (carLeido!='0')){
		conjCarac = 0;
	}else if(isdigit(carLeido)){
		conjCarac = 1;
	}else{
		conjCarac = 2;
	}

	return conjCarac;
}

int getNuevoEstado(int conjCaracter, int estadoActual){
	int nuevoEstado = 0;

	nuevoEstado = matrix[estadoActual][conjCaracter];

	return nuevoEstado;
}


int main(void) {
	int salir = 0;
	char rta = 'n';
	while (salir == 0){

	int estadoActual = 0;//Inicial
	int estadoAnterior = 0;
	int estadoAceptacion = 1;
	size_t tamanio = 0;
	int contador = 0;
	char* unaCadena = malloc(255);
	printf("ingrese una cadena\n");
	scanf("%s",unaCadena);
	tamanio = strlen(unaCadena);

	while(contador < tamanio){
		char charActual = '\0';
		charActual = *(unaCadena+contador);
		estadoAnterior = estadoActual;
		estadoActual = getNuevoEstado(getConjuntoCaracter(charActual),estadoAnterior);
		contador++;
	}
	if(estadoActual == ESTADO_ACEPTACION){
		printf("Cadena Válida :)\n");
	}else{
		printf("Cadena Inválida :(\n");
	}

	printf("desea ingresar otra cadena? s:SI n:No \n");
	fflush( stdin );
	scanf("%s", &rta);

	if(rta == 'n'){
		salir = 1;
	}

	}
		return EXIT_SUCCESS;
}
