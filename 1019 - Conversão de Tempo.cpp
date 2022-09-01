#include <iostream>
 
using namespace std;
 
int main() {
 
    int entrada, horas, minutos, segundos;
    int restoHoras, restoMinutos, restoSegundos;
    
    scanf("%d", &entrada);
    
    horas = entrada/3600;
    restoHoras = entrada%3600;
    
    minutos = restoHoras/60;
    restoMinutos = restoHoras%60;
    
    segundos = restoMinutos;
 
 	printf("%d:%d:%d\n", horas, minutos, segundos);
 
    return 0;
}
