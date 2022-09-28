#include <iostream>
#include <map>

using namespace std;

int main() {
   map<string,string> alfa;

   cout << "Digite o local: ";
   cin  >> alfa["Local"];
   cout << "Digite o responsavel: ";
   cin  >> alfa["Resp"];
   cout << "Digite a prioridade: ";
   cin  >> alfa["Prioridade"];

   for(auto& elem : alfa){
      cout << elem.first << ": " << elem.second << " " << endl;
   }
}
