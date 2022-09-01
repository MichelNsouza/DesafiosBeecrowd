#include <stdio.h>

int main() {
    
    int cod1,pc1,cod2,pc2;
    double val1, val1T, val2,val2T, total;
    
    scanf("%d %d %lf", &cod1, &pc1, &val1);
    scanf("%d %d %lf", &cod2, &pc2, &val2);
    val1T = val1 * pc1;
    val2T = val2 * pc2;
    total = val1T+val2T;
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    return 0;
}

