#include <iostream>

using namespace std;

int main() {
	
	int posi, maior=0, valor;
	
	for(int i = 1; i <= 100; i++){
	cin >> valor;
		if(valor> maior){
			maior = valor;
			posi = i;
		}
	}
	cout << maior <<"\n" <<posi << endl;
} 
