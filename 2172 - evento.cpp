#include <stdio.h>
#include <stdbool.h>

int main() {

    int i = 1, vezes, xp=1 ;
    
    while(true){
        scanf("%d %d", &vezes, &xp);
        if(xp == 0 && vezes == 0){
            break;
        }else{
        printf("%d\n",(xp*vezes));
        }
	}
}