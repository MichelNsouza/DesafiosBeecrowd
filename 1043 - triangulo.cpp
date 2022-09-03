#include<stdio.h>
int main()
{
    float ladaoA,ladoB,ladoC,perimetro,area;
    
    scanf("%f %f %f",&ladaoA,&ladoB,&ladoC);
    
    if( (ladaoA + ladoB) > ladoC && (ladoB + ladoC) > ladaoA && (ladoC + ladaoA) > ladoB ){
        perimetro = ladaoA + ladoB + ladoC;
        printf("Perimetro = %.1f\n", perimetro);  
    }
    else{
        area =(ladaoA+ladoB)*ladoC/2;
        printf("Area = %.1f\n",area);
    }
    return 0;
}
