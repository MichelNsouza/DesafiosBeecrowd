#include <stdio.h>

int main() {
    
    double A, B, C, pi = 3.14159;
    double TRI, CIR, TRA, QUA, RET;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    TRI = (A * C) /2; // A = b.h/2 sendo A = b e C =h
    CIR = (pi * (C * C)); // C = RAIO
    TRA = ((A+B)*C)/2; // A=(B+b)*h/2 onde A e B= B b e C = h
    QUA = (B * B); // h*l
    RET = (A * B);

    printf("TRIANGULO: %.3lf\n", TRI);
    printf("CIRCULO: %.3lf\n", CIR);
    printf("TRAPEZIO: %.3lf\n", TRA);
    printf("QUADRADO: %.3lf\n", QUA);
    printf("RETANGULO: %.3lf\n", RET);

    return 0;
}

