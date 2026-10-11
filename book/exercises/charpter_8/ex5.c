#include <stdio.h>
#define tamanho_sequencia 40

int main (void)
{
	int fib_seq[tamanho_sequencia] = {[0] = 0, [1] = 1};
	int i;
	for(int i = 2; i < tamanho_sequencia; i++)
	{
		fib_seq[i] = fib_seq[i-2] + fib_seq[i-1];
	}
	printf("Sequencia de Fibonacci: ");
	for(i = 0; i < tamanho_sequencia; i++)
	{
		if(i == (tamanho_sequencia - 1))
		{
			printf("%d", fib_seq[i]);
		}
		else
		{
			printf("%d, ", fib_seq[i]);
		}
	}
	printf("\n");
	return 1;
}
