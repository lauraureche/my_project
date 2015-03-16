/* Author: Laura Ureche
 * Programul primeste variabilele a, b si c ale unei ecuatii de gradul doi de forma: a*x^2+b*x+c=0 si rezolva ecuatia.
 * Output: solutia ecuatiei.
 */
#include <stdio.h>
#include <math.h>

int main(void){
	float a,b,c,delta,x1,x2,xr,xi;
	printf("a:");
	scanf("%f", &a);
	printf("b:");
	scanf("%f", &b);
	printf("c:");
	scanf("%f", &c);
	printf("Ecuatia: %5.2f*x^2 + %5.2f*x + %5.2f = 0\n", a,b,c);
	if (a == 0)
		if (b != 0)
			printf("O singura radacina: %6.2f\n",-c/b);
		else
			if (c != 0)
				printf("Nici o solutie\n");
			else
				printf("O infintate de solutii\n");
	else
	{
		delta = b*b-4*a*c;
		if (delta >=0)
		{
			x1 = (-b/sqrt(delta))/2/a;
			x2 = (b/sqrt(delta))/2/a;
			printf("x1 = %5.2f\nx2 = %5.2f\n", x1, x2);
		}
		else
		{
			xr = -b/2/a;
			xi = sqrt(-delta)/2/a;
			printf("x1 = %5.2f + i*%5.2f\nx2 = %5.2f - i*%5.2f\n", xr,xi,xr,xi);
		}
	}
	return 0;
}
