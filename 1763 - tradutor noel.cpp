#include <bits/stdc++.h>

using namespace std;

int main() {
    
	string pais;
	// map <tipo, tipo> nome da varMap
	map <string, string> chaveValor;
	    
		chaveValor["brasil"]="Feliz Natal!";
		chaveValor["alemanha"]="Frohliche Weihnachten!";
		chaveValor["austria"]="Frohe Weihnacht!";
		chaveValor["coreia"]="Chuk Sung Tan!";
		chaveValor["espanha"]="Feliz Navidad!";
		chaveValor["grecia"]="Kala Christougena!";
		chaveValor["estados-unidos"]="Merry Christmas!";
		chaveValor["inglaterra"]="Merry Christmas!";
		chaveValor["australia"]="Merry Christmas!";
		chaveValor["portugal"]="Feliz Natal!";
		chaveValor["suecia"]="God Jul!";
		chaveValor["turquia"]="Mutlu Noeller";
		chaveValor["argentina"]="Feliz Navidad!";
		chaveValor["chile"]="Feliz Navidad!";
		chaveValor["mexico"]="Feliz Navidad!";
		chaveValor["antardida"]="Merry Christmas!";
		chaveValor["canada"]="Merry Christmas!";
		chaveValor["irlanda"]= "Nollaig Shona Dhuit!";
		chaveValor["belgica"]="Zalig Kerstfeest!";
		chaveValor["italia"]="Buon Natale!";
		chaveValor["libia"]=" Buon Natale!";
		chaveValor["siria"]=" Milad Mubarak!";
		chaveValor["marrocos"]="Milad Mubarak!";
		chaveValor["japao"]="Merii Kurisumasu!";
    
	while(cin >> pais){
		if (chaveValor[pais].empty()){
			cout << "--- NOT FOUND ---\n";
		}else {
		 cout << chaveValor[pais]<<endl;;	
		}
	}
}
   
   // while(getline(cin, pais))

