#include <stdio.h>
 
int main() {

   int numero;
   double horas, salario, salariohora;

    scanf("%d", &numero);
    
    scanf("%lf", &salario);
    scanf("%lf", &horas);
    
    salariohora = salario * horas;
    
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numero, salariohora);
    
    return 0;
}

