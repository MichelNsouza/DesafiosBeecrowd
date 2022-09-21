#include <stdio.h>

int main()
{
    double valores[5], media, somamedia, positivos, negativo, par, impa;
    
    for(int i = 0; i < 5; i++)
	{
        scanf("%lf",&valores[i]);
    }
    
    for(int i = 0; i < 5; i++)
	{
        if(valores[i] > 0)
		{
            positivos++;
            
        }else if(valores[i] < 0)
		{
            negativo++;
        }
        if((int)valores[i]%2 == 0)
		{
            par++;
            
        }else if((int)valores[i]%2 == 1)
		{
            impa++;
        }
    }    
    printf("%.0lf valor(es) par(es)\n%.0lf valor(es) impar(es)\n%.0lf valor(es) positivo(s)\n%.0lf valor(es) negativo(s)\n", par, impa, positivos, negativo);
    return 0;
}
