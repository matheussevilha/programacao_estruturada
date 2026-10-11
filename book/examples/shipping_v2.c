/*Second version of the program that calculates the weight of a box for shipping tax reasons*/

#include <stdio.h>

int main(void)
{
	int height, length, width, volume, weight;
	printf("Enter the height, width and length: ");
	scanf("%d %d %d", &height, &width, &length);
	volume = height * width * length;
	weight = (volume + 165) / 166;
	printf("%d\n", weight);
	return 0;
}
