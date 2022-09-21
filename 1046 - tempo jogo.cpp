#include <stdio.h>

int main()
{
    int tinicial, tfinal, resposta;
    
    scanf("%d %d", &tinicial, &tfinal);
    
    if(tinicial > tfinal ){
        resposta = (tinicial - 4) - tfinal;
    }else if(tinicial < tfinal){
        resposta = tfinal - tinicial;
    }else if(tinicial == tfinal){
        resposta = 24;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", resposta );

    return 0;
}
