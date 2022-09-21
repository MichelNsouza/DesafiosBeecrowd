#include <stdio.h>

int main() {
    
    int entrada;
    
    scanf("%d", &entrada);
    
    if(entrada == 0){
        printf("E\n");
    }else if(entrada > 0 && entrada <= 35){
        printf("D\n");
    }else if(entrada > 35 && entrada <= 60){
        printf("C\n");
    }else if(entrada > 60 && entrada <= 85){
        printf("B\n");
    }else if(entrada > 85 && entrada <= 100){
        printf("A\n");
    }

    return 0;
}
