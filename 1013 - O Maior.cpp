#include <stdio.h>

int main() {
    
    int A, B, C, R, maior;
    
    scanf("%d %d %d", &A, &B, &C);
    
    if(A > B){
        R = A; 
    }else{
        R = B;
    }
    if (C > R){
        R = C;
    }
    maior = R;
    printf("%d eh o maior\n", maior);

    return 0;
}

