#include <stdio.h>

int main()
{
    int tabuN;
    
    scanf("%d", &tabuN);
   
   for(int i = 1; i < 11 ;i++){
       printf("%d x %d = %d\n", i, tabuN, (i*tabuN));
   }
  
    return 0;
}