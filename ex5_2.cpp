#include <stdio.h>
#include <ctype.h>
int main() {
	int i;
	char c;
	char vet[12];
	
	for (i = 0; i < 12; i++) {
		scanf(" %c", &c);
		if(isalpha(c))
			vet[i] = c;
		else
			vet[i] = '*';
	}
	
	printf("\nConteudo do vetor:\n");
	
	for (i = 0; i < 12; i++)
		printf("%c\n",vet[i]);
}
