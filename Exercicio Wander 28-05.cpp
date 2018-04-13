/*Escrever um PGM que gere uma string de tamanho N onde
N<=100 cujo conte�do seja letra maiusculas aleatorias.
Em seguida, o usu�rio deve fornecer um char na entrada
padr�o. O PGM deve retornar o n�mero de ocorr�ncias do char 
na string e as respectivas posi��es.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <string.h>

int main (){
	srand(time(0));
	char str[101]="";
	char ch;
	int i,j=0;
	char *pos = NULL;
	int qtd=0;

	for ( i=0;i<=100;i++ )
	str[i]=rand()%26+65;
	
	printf("%s\n",str);
	
	scanf("%c",&ch);
	do {
		pos = strchr(str+j,ch);
		if(pos!=NULL){
			qtd++;
			printf("%d\n",pos-str);	
			j=pos-str+1;
		}
		else
		  j++;
	} while(str[j]!='\0');
	printf("%d",qtd);
}
