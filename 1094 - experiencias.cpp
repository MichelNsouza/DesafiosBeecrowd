#include <bits/stdc++.h>

using namespace std;

int main() {
	
	double qtd, testes, total, c=0, r=0, s=0;
	double pc, pr, ps;
	char letra;
	
	cin >> testes;
	
	for(int i = 0; i < testes; i++){
		cin >> qtd >> letra;
			  if(letra == 'R'){
			r = r + qtd;
		}else if(letra == 'S'){
			s = s + qtd;
		}else if(letra == 'C'){
			c = c + qtd;
		}
	}
	total= c+r+s;
	pc = (c*100)/total;
	pr = (r*100)/total;
	ps = (s*100)/total;
	//printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%", );
	printf("Total: %.0lf cobaias\n", total );
	printf("Total de coelhos: %.0lf\n", c);
	printf("Total de ratos: %.0lf\n", r);
	printf("Total de sapos: %.0lf\n", s);
	printf("Percentual de coelhos: %.2lf %%\n", pc);
	printf("Percentual de ratos: %.2lf %%\n", pr);
	printf("Percentual de sapos: %.2lf %%\n", ps);
    
	return 0;
} 
