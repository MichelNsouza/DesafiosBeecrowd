#include <stdio.h>

int main() {

    int valor, quadrado, cubo;
    
    scanf("%d", &valor);
    
    for(int i = 1 ; i <= valor; i++){
        quadrado = (i * i);
        cubo = (i * i * i);
        printf("%d %d %d\n",i, quadrado, cubo);
    }
    
    return 0;
}