#include <iostream>
 
using namespace std;
 
int main() {

   double cod, qTd, total, valor1 = 4, valor2 = 4.5, valor3 = 5, valor4 = 2, valor5 = 1.50;
   
   scanf("%lf %lf", &cod, &qTd);
   
   if(cod == 1){
   	total = qTd * valor1;
   }
   if(cod == 2){
   	total = qTd * valor2;
   }
   if(cod == 3){
   	
   	total = qTd * valor3;
   }
   if(cod == 4){
   	total = qTd * valor4;
   }
   if(cod == 5){
   	total = qTd * valor5;
   }
   
   printf("Total: R$ %.2lf\n", total);
   
    return 0;
}

