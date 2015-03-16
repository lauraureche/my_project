/*
 * Author: Laura Ureche
 * Se dau N puncte in plan (date prin coordonatele x şi y), citite de la tastatură, care reprezintă vârfurile
 * unui poligon convex. Punctele sunt date în ordine trigonometrică (sau invers trigonometrică) să se calculeze:
 * - perimetrul poligonului convex
 * - aria poligonului convex
 */
#include<stdio.h>
#include<math.h>

int main(void){
	int i, n, x, y;
	double r, latura, per, aria;

	printf("Numarul de varfuri:");
	scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		printf("coordonatele x,y");
		scanf("%d,%d", &x, &y);
		r = sqrt(x*x + y*y);
	}

	latura = 2*r*sin(180/n);
	per = n*latura;

	aria = (n*r*r*sin(360/n))/2;

	printf("Perimetru: %f", per);
	printf("Aria: %f", aria);
	return 0;
}
