#include <stdio.h>
#include "function_fatorial.c"
#include <stdlib.h>

void main(int argc, const char *argv[]){
	if(argc != 2){
        printf("digite o nome do programa seguido de 1 argumento (Fatorial 5)");
    }else{
    	int input = atoi(argv[1]);
		printf("resultado: %d\n", fatorar(input));
		printf("\nFeito por PedroUlian (https://github.com/PedroUlian) (https://github.com/UlianAlt)");
    }
}
