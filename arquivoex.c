#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	FILE * arquivo = NULL;
	char texto[100];
	
	arquivo = fopen("exemplo.txt", "w+");
	fprintf(arquivo, "!\n");
	fflush(arquivo);
	
	arquivo = fopen("exemplo.txt", "a+");
	fgets(texto,100,arquivo);
	printf("%s", texto);
	
	return 0;
}
