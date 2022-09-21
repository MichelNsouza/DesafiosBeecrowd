#include <stdio.h>

int main()
{
    int qtdN;
    
    scanf("%d", &qtdN);
    
    int veloreN[qtdN];
    
    for(int i = 0 ; i < qtdN ; i++){
        scanf("%d", &veloreN[i]);
    }
    
     for(int i = 0 ; i < qtdN ; i++){
         if(veloreN[i] == 0){
             printf("NULL\n");
         }else{
             if(veloreN[i]%2 == 0){
                 printf("EVEN");
             }else{
                 printf("ODD");
             }
             
             if(veloreN[i] > 0){
                 printf(" POSITIVE\n");
             }else{
                 printf(" NEGATIVE\n");
             }
         }
    }
    

    return 0;
}
