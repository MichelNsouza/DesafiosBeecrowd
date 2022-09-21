#include <stdio.h>

int main()
{
    int v,t,r1,r2;
    
    scanf("%d", &v);
     
    for(int i = 0; i < v ;i++){
    	
        scanf("%d %d", &r1, &r2);
        
        t =r1+r2;
        
        printf("%d\n", t);
    }
    
    return 0;
}