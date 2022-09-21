#include <stdio.h>

int main()
{
    double salario, salariob, percent;
    
    scanf("%lf", &salario);
    
    if(salario <= 400.00){
        salariob = salario * 0.15;
        percent = 15;
    }else if(salario > 400.00 && salario <= 800.00){
        salariob = salario*0.12;
        percent = 12;
    }else if(salario > 800.00 && salario<=1200.00){
        salariob = salario*0.10;
        percent = 10;
    }else if(salario > 1200 && salario <= 2000.00){
        salariob = salario*0.07;
        percent = 07;
    }else if(salario > 2000.00){
        salariob = salario*0.04; 
        percent = 04;
    }
    
    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %%\n", (salario+salariob), salariob, percent);

    return 0;
}