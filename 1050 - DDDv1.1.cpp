#include <iostream>
 
using namespace std;
 
int main() {
	
	int ddd;
 
    scanf("%d", &ddd);
     
	 	if (ddd != 61 && ddd != 71 && ddd != 11 && ddd != 21 &&  ddd != 32 &&  ddd != 19 &&  ddd != 27 && ddd != 31){
	    	printf("DDD nao cadastrado\n");
		}else if(ddd == 61 ){
	    	printf("Brasilia\n");
		}else if(ddd == 71 ){
	    	printf("Salvador\n");
		}else if(ddd == 11){
	    	printf("Sao Paulo\n");
		}else if(ddd == 21){
	    	printf("Rio de Janeiro\n");
		}else if(ddd == 32){
	    	printf("Juiz de Fora\n");
		}else if(ddd == 19){
	    	printf("Campinas\n");
		}else if(ddd == 27){
	    	printf("Vitoria\n");
		}else if(ddd == 31){
	    	printf("Belo Horizonte\n");
		}
			
    return 0;
}

