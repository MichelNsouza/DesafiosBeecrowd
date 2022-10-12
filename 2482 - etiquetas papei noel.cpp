#include <bits/stdc++.h>

using namespace std;

int main() {
	
    int qtdN=0,qtdM=0;
	string idioma, traducao, nome;
    map<string,string> idioma;
    map<string,string> criancas;

    cin >> qtdN;
    while(qtdN--){
		while(qtdIdioma--){
			cin >> idioma >> traducao;
			idioma[idioma]=traducao;
		}
		
    cin >> qtdM;	
		while(qtdM--){
			cin >> nome >> idioma;
			criancas[nome] = idioma;
		}
		
	map<string,string>::iterator it;

    for( it = criancas.begin() ; it != criancas.end() ; it++ ){

        cout << it->first << endl;
        cout << idioma[it->second];
        cout << endl;
}

