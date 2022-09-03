#include <stdio.h>

int main() {
    
    int a, b, c, aInicial, bInicial, cInicial, auxiliarTroca;
    
    scanf("%d %d %d", &a2,&b2,&c2);
    
    a = aInicial;
    b = bInicial;
    c = cInicial;
    
    if (a < b){
        auxiliarTroca = a;
		a = b;
		b = auxiliarTroca	;
    }
    if (b < c){
		auxiliarTroca = b;
		b = c;
		c = auxiliarTroca;
    }
 
    if (a < b){
        auxiliarTroca = a;
		a = b;
		b = auxiliarTroca;	
    }
    
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", c, b,a, aInicial, bInicial, cInicial);
    return 0;
}
