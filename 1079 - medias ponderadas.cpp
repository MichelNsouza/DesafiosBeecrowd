#include <stdio.h>

int main()
{
    int nTestes;
    
    scanf("%d", &nTestes);
   
    double casos[nTestes], media[nTestes];
   
    for(int i = 0; i < nTestes ; i++ ){
        
        for(int ii = 0; ii < 3; ii++){
            scanf("%lf", &casos[ii]);
        }
        // peso 2 3 5
        media[i] = ((casos[0]*2)+(casos[1]*3)+(casos[2]*5))/10;
    }
   
   for(int iii = 0; iii < nTestes ; iii++){
       printf("%.1lf\n", media[iii]);
   }
  
    return 0;
}