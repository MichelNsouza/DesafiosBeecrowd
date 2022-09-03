#include <stdio.h>

int main(){
	
    double eixoX, eixoY;

	scanf("%lf %lf", &eixoX, &eixoY);
	
	if(eixoX > 0.0 && eixoY > 0.0){
		printf("Q1\n");
	}
	if(eixoY > 0.0 && eixoX < 0.0){
		printf("Q2\n");	
	}
	if(eixoY < 0.0 && eixoX < 0.0){
		printf("Q3\n");
	}
	if(eixoX> 0.0 && eixoY < 0.0){
		printf("Q4\n");
	}
	
	if(eixoX == 0.0 && eixoY == 0.0){
		printf("Origem\n");
	}
	if(eixoY == 0.0 && eixoX != 0.0){
		printf("Eixo X\n");
	}
	
	if(eixoX == 0.0 && eixoY != 0.0){
		printf("Eixo Y\n");
	}
    return 0;
}
