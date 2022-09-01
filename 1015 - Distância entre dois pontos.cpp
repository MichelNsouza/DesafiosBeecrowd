#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main() {
    
    double x1, x2, y1,y2 ,p1, p2, R, RES;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    R = ((x2 - x1)*(x2-x1))+((y2-y1)*(y2-y1));
    RES = sqrt(R);
    
    printf("%.4lf\n", RES);
    return 0;
}

