/*
 * main.c
 *
 *  Created on: 22/02/2015
 *      Author: marcelo
 */
#include <stdlib.h>
#include <stdio.h>

int countBits(int valor) {
	if (valor < 2)
		return 1;
	else {
		return 1 + countBits(valor/2);
	}
}

int main(int argc, char **argv) {
	printf("saida: %d", countBits(100));
	return EXIT_SUCCESS;
}
