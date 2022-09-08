#include <stdio.h>

int main() {
    
    long int i, num, total, soma;
    
    scanf("%lld", &num);
    
    soma = num;
    total = num;
		
    for (int i = 1; i < num; i++) {
			soma -= 1;
			total *= soma;
		}
    
    printf("%ld\n", total);
    
    return 0;
}

