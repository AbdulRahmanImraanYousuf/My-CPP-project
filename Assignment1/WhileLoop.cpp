#include <iostream>
using namespace std;

int main(){

    int input = 0;
    
    while(input < 5 || input > 10){

        cout << "Enter an integer value between 5 and 10 : \n";
        cin >> input;

        if( input >= 5 && input <= 10)

            cout << "Your input value("<<input<<") has been accepted";
        else if(input < 3)

            cout << "You entered " << input <<". Please enter a number between 5 and 10 " <<endl;
        else 
            cout << "Sorry, you entered an invalid number, please try again \n";
        
    
     }           
         return 0;
}