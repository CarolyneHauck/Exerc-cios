#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20
int main() {
	srand(time(0));
	int i;
	int vetA[SIZE];
	int vetB[SIZE];
	int vetC[SIZE];
	
	for (i = 0; i < SIZE; i++) {
		vetA[i]=rand()%100;
	}
	
	for (i = 0; i < SIZE; i++) {
		vetB[i]=rand()%100;
	}
	
	for (i = 0; i < SIZE; i++) {
		vetC[i]=vetA[i] + vetB[i];
		printf("Vetor A: %d\t Vetor B: %d\t Vetor C: %d\n", vetA[i], vetB[i], vetC[i]);
	}
}
