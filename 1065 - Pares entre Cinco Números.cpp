#include <stdio.h>
 
 
int main() {
 
    int t = 0, i, v[5];
    
    for(i = 0;i < 5; i++){
        scanf("%d", &v[i]);
    }
    
    for(i = 0;i < 5; i++){
        v[i] = v[i]%2;  
        if(v[i] == 0){
            t++;
        }
    }
    printf("%d valores pares\n", t);
    
    return 0;
}
