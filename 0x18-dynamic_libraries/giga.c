#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n, m;

	for (n = -9; n <= 10; n++)
	{
		m = rand() % 100;
	printf("%d", m);
	}

	printf("Congratulations, you win the Jackpot!");

	return (0);
}
