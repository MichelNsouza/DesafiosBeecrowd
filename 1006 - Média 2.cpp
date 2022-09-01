#include <stdio.h>
 
int main() {
 
    double A, B, C, media, p1=2, p2=3, p3=5;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    media = ((p1*A)+(p2*B)+(p3*C)) / 10;
    printf("MEDIA = %.1f\n", media);
    
    return 0;
}

