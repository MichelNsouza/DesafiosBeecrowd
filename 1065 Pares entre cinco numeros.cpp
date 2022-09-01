#include <stdio.h>
 
 
int main() {
 
    int v, a, b, c, d, e, a2, b2, c2, d2, e2;
    
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
 
    a2 = a%2;
    b2 = b%2;
    c2 = c%2;
    d2 = d%2;
    e2 = e%2;
    
    if(a2 == 0){
        v++;
    }
    if(b2 == 0){
        v++;
    }
    if(c2 == 0){
        v++;
    }
    if(d2 == 0){
        v++;
    }
    if(e2 == 0){
        v++;
    }
    
    printf("%d valores pares\n", v);
    return 0;
}
