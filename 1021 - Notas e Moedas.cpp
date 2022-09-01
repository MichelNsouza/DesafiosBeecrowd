#include <stdio.h>

int main() {
    
    double valor, D, C, semConverter;
    int nota, moeda, convertido, restoMoeda;
    
	int nota100, nota50, nota20, nota10, nota5, nota2;
    int resto100, resto50, resto20, resto10, resto5, resto2;
    
    int moeda1, moeda50, moeda25, moeda10, moeda05, moeda01;
    int rmoeda1, rmoeda50, rmoeda25, rmoeda10, rmoeda05, rmoeda01;

    
    scanf("%lf", &valor);
    
    nota = valor;

	nota100 = nota/100;
	resto100 = nota%100;
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
	moeda1 = resto2/1;
	rmoeda1 = resto2%1;
	
	// var vem float
	
	semConverter = valor*100; // multiplica o lf por 100
	
	convertido = (int)semConverter; // converte em inteiro
	
	restoMoeda = convertido%100; // retirar os 100 q foi mult
	
	// var sai int
	
	moeda50 = restoMoeda/50;
	rmoeda50 = restoMoeda%50;
	moeda25 = rmoeda50/25;
	rmoeda25 = rmoeda50%25;
	moeda10 = rmoeda25/10;
	rmoeda10 = rmoeda25%10;
	moeda05 = rmoeda10/5;
	rmoeda05 = rmoeda10%5;
	moeda01 = rmoeda05/1;
	rmoeda01 = rmoeda05%1;
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", moeda1);
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    printf("%d moeda(s) de R$ 0.25\n", moeda25);
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    printf("%d moeda(s) de R$ 0.05\n", moeda05);
    printf("%d moeda(s) de R$ 0.01\n", moeda01);

    return 0;
}

