#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20
int main() {
	srand(time(0));
	int i;
	int vet[SIZE];
	
	for (i = 0; i < SIZE; i++)
		vet[i]=rand()%10;
	
	printf("\nConteudo do vetor:\n");
	
	for (i = 0; i < SIZE; i++)
		printf("%4d\n", vet[i]);
}
