#include <stdio.h>

#include "dif.h"
#include "div.h"
#include "add.h"
#include "mul.h"

#define cls() printf("\e[2J\e[H")

int main (void) 
{
	mclx a = {0, 0}, b = {0, 0}, result = {0, 0}, tmp;
	unsigned char choice = '\0';
	
	cls();
	printf ("Welcome to Complex Nums Calc!\n\n");
	
	while (choice != '0') 
	{
		printf ("a = %f+(%f*i)\nb = %f+(%f*i)\n",
			a.re, a.im, b.re, b.im);

		printf ("Previous result: %f+(%f*i)\n", result.re, result.im);

		printf ("\nChoose action:\n\t(1) Add\n\t(2) Diff\n\t(3) Mult\n\t(4) Div\n\n\t(5) Swap values\n\t(6) Enter values\n\n\t(0) Quit\n\n>> ");

		choice = getchar();
		

		switch (choice) 
		{
			case '0':
				break;

			case '1':
				result = add (a, b);
				break;

			case '2':
				result = dif (a, b);
				break;

			case '3':
				result = mul (a, b);
				break;

			case '4':
				result = div (a, b);
				break;

			case '5':
				tmp = b;
				b = a;
				a = tmp;
				choice = '\0';
				break;

			case '6':
				printf ("Enter a (Re Im): ");
				scanf ("%lf %lf", &a.re, &a.im);
				printf ("\nEnter b (Re Im): ");
				scanf ("%lf %lf", &b.re, &b.im);
				choice = '\0';
				break;

		}
		cls();
	}
	return 0;	
}
