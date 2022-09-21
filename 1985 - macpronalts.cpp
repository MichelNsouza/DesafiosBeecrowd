#include <stdio.h>

int main() {
    
    int entrada,qtd, cod;
    double total = 0;
    
    scanf("%d", &entrada);
    
    for(int i = 0 ;i < entrada; i++){
        
        scanf("%d %d", &cod,&qtd);

        if (cod == 1001){
            
           total += ((double) qtd  * 1.50);
           
        }else if (cod  == 1002){
            
            total += ((double) qtd * 2.50);
            
        }else if (cod  == 1003){
            
            total += ( (double)qtd * 3.50);
            
        }else if (cod  == 1004){
            
           total += ( (double) qtd * 4.50);
           
        }else if (cod  == 1005){
            
            total += ( (double) qtd * 5.50);
        }
    }
    
    printf("%.2lf\n", total);
    
    return 0;
}
