#include <iostream>
 
using namespace std;
 
int main() {
 
    int entrada, ano, mes, dia;
    int restoAno, restoMes, restoDia;
    
    scanf("%d", &entrada);
    
    ano = entrada/365;
    restoAno = entrada%365;
    
    mes = restoAno/30;
    restoMes = restoAno%30;
    
	dia = restoMes;
 
 	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);
 
    return 0;
}
