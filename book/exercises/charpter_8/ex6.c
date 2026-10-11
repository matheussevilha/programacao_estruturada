#include <stdio.h>
#include <stdbool.h>

//Programa para representar 5 dígitos digitalmente, ou tentar, usando "__" e "|"

int main (void)
{
	bool digitos[5][7] = 
	{
		{[2] = true, [5] = true}, 
		{[0] = true, [2] = true, [3] = true, [4] = true, [6] = true},
		{[0] = true, [2] = true, [3] = true, [5] = true, [6] = true},
		{[1] = true, [3] = true, [2] = true, [5] = true},
		{[0] = true, [1] = true, [3] = true, [5] = true, [6] = true}
	};
	//Tentativa de printar os valores como em um relógio digital
	
	int numero, linha, posicao = 0;
	for(numero = 0; numero < 5; numero++)
	{
		printf("numero %d:\n", numero + 1);
		posicao = 0;
		for(linha = 0; linha < 5; linha++)
		{
			if((linha % 2) == 0)
			{
				printf(" ");
				if(digitos[numero][posicao])
				{
					printf("__");
				}
				else
				{
					printf("  ");
				}
				printf(" ");
				posicao++;
			}
			else
			{
				if(digitos[numero][posicao])
				{
					printf("|");
				}
				else
				{
					printf(" ");
				}
				posicao++;
				printf("  ");
				if(digitos[numero][posicao])
				{
					printf("|");
				}
				else
				{
					printf(" ");
				}
				posicao++;

			}
			printf("\n");
		}
		printf("\n");
	}
	return 1;
}
