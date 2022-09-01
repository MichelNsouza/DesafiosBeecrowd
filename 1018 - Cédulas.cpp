#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    
    int valor, nota100, nota50, nota20, nota10, nota5, nota2, nota1, resto100, resto50, resto20, resto10, resto5, resto2;
    
    scanf("%d", &valor);
	
	nota100 = valor/100;
	resto100 = valor%100;
	
	nota50 = resto100/50;
	resto50 = resto100%50;
	
	nota20 = resto50/20;
	resto20 = resto50%20;
	
	nota10 = resto20/10;
	resto10 = resto20%10;
	
	nota5 = resto10/5;
	resto5 = resto10%5;
	
	nota2 = resto5/2;
	resto2 = resto5%2;
	
	nota1 = resto2/1;

	printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",valor ,nota100, nota50, nota20, nota10, nota5, nota2, nota1);

    return 0;
}

