/*
 ============================================================================
 Name        : Concatena2Cadenas.c
 Author      : santiago Balbiani
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {

	char* unaCadena = malloc(255);
	char* unaSegundaCadena = malloc(255);
	size_t tamanio1 = 0;
	size_t tamanio2 = 0;
	printf("ingrese una cadena");
	scanf("%s",unaCadena);

	tamanio1 = strlen(unaCadena);

	printf("ingrese otra cadena");
	scanf("%s",unaSegundaCadena);
	tamanio2 = strlen(unaSegundaCadena);

	if(*(unaCadena) == '\0'){
		strcpy(unaCadena,"Cadena Vacía");
	}

	if(*(unaSegundaCadena) == '\0'){
		strcpy(unaCadena , "Cadena Vacía");
	}

	printf("Valor de la Primer Cadena: %s", unaCadena);
	printf("\n Longitud de Cadena: %d", tamanio1);

	printf("\n Valor de la Segunda Cadena: %s", unaSegundaCadena);
	printf("\n Longitud de Cadena: %d", tamanio2);

	printf("\n Valores Concatenados: %s", (strcat(unaCadena, unaSegundaCadena)));
	return EXIT_SUCCESS;
}
