#include <stdio.h>

int main()
{
    
    int fibonacci, serie[46];
    serie[0] = 0;
    serie[1] = 1;
    serie[2] = 1;

    scanf("%d", &fibonacci);
    
    // sequencia de fibonacci fn = fn-1 + fn -2
    
    for(int i = 3; i < fibonacci; i++){
        
     serie[i] = serie[i - 1] + serie[i - 2];
    //serie[i] = (serie[i] - 1) + (serie[i] - 2);  não funcionou
    
    }
    printf("%d", serie[0]);
    for(int i = 1; i < (fibonacci) ;i++){
    printf(" %d", serie[i]);
}
    printf("\n");

    return 0;
}
