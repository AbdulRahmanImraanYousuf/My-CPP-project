#include <iostream>
#include <String>
using namespace std;
 
 int main(){
string myArray[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235",  "B179"};

for ( int i = 0; i <= 7; i++){
   if(myArray[i].find("B") != string :: npos)
   cout << myArray[i] << endl;

}
 


 }