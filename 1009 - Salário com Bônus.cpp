#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    string nomeVendedor;
    double salario, bSalario, qtdVendas;
    
    cin >> nomeVendedor;
    cin >> salario;
    cin >> qtdVendas;
    
    bSalario = (qtdVendas/100) * 15;
    
    salario = salario + bSalario;
    
    printf("TOTAL = R$ %.2lf\n", salario);
    
    return 0;
}

