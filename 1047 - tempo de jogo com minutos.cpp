#include <stdio.h>
 
int main() { 
    
    int hora, min, inicio, fim, minIn, minFim;

    scanf("%d %d %d %d", &inicio, &minIn, &fim, &minFim);
    
	if (minIn > minFim) { 
       min = 60 - (minIn - minFim);
    } else if (minFim > minIn) {
        min = minFim - minIn;
    } else {
        min = 0;
    } 
    
   if (inicio > fim) { 
       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", 24 - (inicio - fim), min);
    } else if (inicio < fim) {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", fim - inicio, min);
    } else {
        printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n");
    }
    

    
    
    return 0;
}
