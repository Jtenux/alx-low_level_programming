#include <stdio>
/**
 * main - this prints numbers from 1 to 0 with fizz and buzz  inter-mixed
 *
 * Return: always 0 when succesful
 */

int main(void)
{
	int j;

	for (j = 1 ; j <= 99 ; j++)
	{
		if (j % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (j % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (j % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", j);
		}
	}
	printf("Buzz\n");
	return (0);
}
