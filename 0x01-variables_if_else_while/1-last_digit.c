#include <time.h>
#include <stdio.h>
/* more headers goes here */

/* betty style doc for function main goes there */
/**
 * main - Entry poin
 *
 * Return: Always 0 (Success)
 */
in main(void)
{
        int n;

        int m;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* my code goes there */
        m = n % 10;
        if (m > 5)
                printf("last digit of %d is %d and is greater than 5\n", n, m);
        if (m == 0)
                printf("last digit 0f %d is %d and is 0\n", n, m),
			if (m < 6 && m != 0)
                printf("last digit of %d is %d and is less than 6 and no 0\n", n, m);
	return (0);
}

