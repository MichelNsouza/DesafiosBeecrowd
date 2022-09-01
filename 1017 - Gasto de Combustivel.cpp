#include <iostream>
using namespace std;

int main() {
    
    double R, tGv, vMv,kmT, kmL = 12;


    scanf("%lf", &tGv);
    scanf("%lf", &vMv);
    
    kmT = vMv * tGv; // km feito na viagem
    R = kmT/12 ; // 12km L
    
    printf("%.3lf\n", R);
    return 0;
}

