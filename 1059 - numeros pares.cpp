#include <bits/stdc++.h>

int main() {
    
    int i=0, todosNumeros[101], total;
    for(i = 0; i < 101; i++){
    	todosNumeros[i] = i ;
    }
		
    for(i = 1; i < 101; i++){
    	total = todosNumeros[i]%2;
    	if(total == 0){
    	printf("%d\n",todosNumeros[i] );
		}
	}
    return 0;
}
