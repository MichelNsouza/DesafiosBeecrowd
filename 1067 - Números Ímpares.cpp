#include <stdio.h>

int
main ()
{
  int v, v2;
    
    scanf("%d", &v);
 
    for(int i = 0; i <= v; i++){
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }
    return 0;
}