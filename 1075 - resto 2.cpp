#include <stdio.h>

int main()
{
    int qtdN;
    scanf("%d", &qtdN);
    for(int i = 0; i < 10000; i++){
        if(i%qtdN == 2){
            printf("%d\n",i);
        }
    }
    return 0;
}