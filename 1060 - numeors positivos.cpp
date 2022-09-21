#include <stdio.h>

int main()
{
    int positivos = 0;
    double valores[6];
    
    for(int i = 0; i < 6; i++)
    {
        scanf("%lf",&valores[i]);
    }
    for(int i = 0; i < 6; i++)
    {
        if(valores[i] > 0)
        {
            positivos++;
        }
    }
    printf("%d valores positivos\n",positivos);
    return 0;
}