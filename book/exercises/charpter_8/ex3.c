#include <stdio.h>
#include <stdbool.h>

int main (void)
{
	printf("Is weekend ?\n");
	int i;
	bool weekend[] = {[0] = true, [6] = true};
	for(i = 0; i <= 6; i++)
	{
		if(weekend[i])
		{
			printf("weekday %d: TRUE\n", weekend[i]);
		}
		else
		{
			printf("weekday %d: FALSE\n", weekend[i]);
		}
	}
	return 1;
}
