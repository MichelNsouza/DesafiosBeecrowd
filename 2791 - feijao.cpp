#include <stdio.h>

int main() {

    int c[4], j=0, i=0;
    
    for(i = 0 ; i < 4 ; i++ ){
        scanf("%d", &c[i]);
        if(c[i]== 1)
        printf("%d\n", i+1);
    }

    return 0;
}