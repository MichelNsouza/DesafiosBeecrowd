#include <stdio.h>

int main() {
    
    int X;
    double Y, R;
    scanf("%d %lf", &X, &Y);
    R = X / Y;
    printf("%.3lf km/l\n", R);

    return 0;
}

