#include <stdio.h>

using namespace std;

int main() {
	
    int valores[]={100, 50, 20, 10, 5, 2, 1};
    int valor, nota[] = {100, 50, 20, 10, 5, 2, 1}, resto[] = {100, 50, 20, 10, 5, 2, 1};

    scanf("%d", &valor);
	printf("%d\n", valores[0]);
	
	nota[0] = valor/100;
	resto[0] = valor%100;
	
	for(int i = 1; i < 5; i++){
		
		int restox = resto[i-1] ; 
		nota[i] = restox/valores[i];
		resto[i] = restox%valores[i];
	}
	nota[6] = resto[5];
		
	for(int i = 0; i < 7;i++){
		printf("%d nota(s) de R$ %d,00\n", nota[i], valores[i]);
	}
    return 0;
}

