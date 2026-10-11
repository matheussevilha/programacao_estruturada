#include <stdio.h>
#define PI 3.14159f

int main(void)
{
	float raio = 0.0f;
	printf("Digite o raio em metros da esfera: ");
	scanf("%f", &raio);
	printf("Volume da esfera: %.2f\n", 4.0f/3.0f * PI * raio * raio * raio);
	return 0;
}
