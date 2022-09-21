#include <stdio.h>

int main(){
    
    int valorN, x, y, auxilarTroca;
    int soma = 0;
 
    scanf("%d", &valorN);
 
    for (int i = 0; i < valorN;i++){
     
    scanf("%d %d", &x, &y);
    // se for numero igual // se for numero seguido ex: (x=3 & y=4)(y=4 & x+1 = 4
    if (x == y || y == x + 1 || x == y +1){
        //nesses casos numero igual e numero em sequencia não se tem consecutivos
       printf("0\n");
        // caso tenha um rage de numeros 
     }else if ( x < y || x > y){
    // transforma x no maior valor e y no menor se y for maior(troca posição)
           if (x > y){
            auxilarTroca = x;
            x = y;
            y = auxilarTroca;
      }
  // repete a qtd de vezes q digitou no primeiro scanf
  for (int j = 0; j < valorN; j++){
      
        while(x < y - 1){
            x = x + 1;
            
            if(x % 2 != 0){
            soma = soma + x;
            }
        }
    }
    
  printf("%d\n", soma);
        soma = 0;
        }
    }
    return 0;
}