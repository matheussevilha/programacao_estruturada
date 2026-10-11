#include <stdio.h>

int main(void)
{
	int heigth = 8,length = 12, width = 10, 
	volume = heigth * length  * width,
	weight =(volume + 165)/ 166;
	
	printf("Dimensions: %dx%dx%d\nVolume: %d\nWeight: %d\n", length, width, heigth, volume, weight);

	return 0;
}
