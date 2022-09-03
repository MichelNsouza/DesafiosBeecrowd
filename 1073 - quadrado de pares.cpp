#include <bits/stdc++.h>

int main() {

 int valor, i, qua;
 
     scanf("%d", &valor);
     
     for ( i = 1; i <= valor; ++i)
     {
	      if(i % 2 == 0){
	      	qua = i*i;
	       printf("%d^2 = %d\n", i, qua);
	      }
     }
    return 0;
}
