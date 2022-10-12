#include <bits/stdc++.h>

using namespace std;

int main() {
	int j, qtdimas = 0;
	string dimabruto; // linha
   
	cin >> j;
   
	while(j--){
	cin >> dimabruto;
	
	   	for(int i = 0; i < dimabruto.size(); i++){
	       	stack <char> dima;
	       	
	       	if(dimabruto[i] == '<'){
	           	dima.push(1);
	       	}
	       	if(dimabruto[i] == '>'){
	       		if(dimabruto.empty()){
	       			break;
	           	}else{
		           dima.pop();
		           qtdimas++;
		    	}
	       	}	 	
	   	}
	   	cout << qtdimas << endl;
	}
	return 0;
}

