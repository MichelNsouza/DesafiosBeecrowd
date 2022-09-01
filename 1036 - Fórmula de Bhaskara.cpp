#include<stdio.h>
#include<iostream>
#include<cmath>

using namespace std;

int main()
{
   
   double a, b, bQuadrado, c, delta, raizDelta, doisXa, xMais, xMenos;
   
   scanf("%lf %lf %lf", &a, &b, &c);
   
    bQuadrado = (b*b);
	delta = bQuadrado - 4 * a * c;
	raizDelta = sqrt(delta);
	doisXa =  2 * a;

	if(delta < 0 || doisXa == 0){
	
	printf("Impossivel calcular\n");
		
	} else {
		
		xMais = (- (b)) + (raizDelta);
		xMais = xMais / doisXa;
		
		xMenos = (- (b)) - (raizDelta);
		xMenos = xMenos / doisXa; 
		
		printf("R1 = %.5lf\nR2 = %.5lf\n", xMais, xMenos);

	}

    return 0;
}

