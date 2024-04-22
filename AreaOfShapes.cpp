#include <iostream>
using namespace std;
 
 double areaOfSquare(double x){
    return x * x;
 }
 double areaOfRectangle(double l, double w){
    return l * w;
 }
 double areaOfTriangle(double b, double h){
    return 0.5 * b * h;
 }

 int main(){
 double x, l, w, b, h;

 while(true){
    
cout << "Please select the area of the shape to calculate: " "  " << endl;
cout << "1.Square " << endl;
cout << "2.Rectangle "<< endl;
cout << "3.Triangle "<< endl; 
cout << "4.Quit Program "  "   "<< endl;

int n;
cout << "Enter selection:  " << endl;
 cin >> n;
 if (n == 1){
 cout << "Square \n";
cout << "Enter length of the square: ";
  cin >> x;
  cout << "The area of the square is " <<areaOfSquare(x) <<endl;

 }
else if (n == 2){
 cout << "Rectangle \n";
cout << "Enter length of the Rectangle: ";
  cin >> l;
  cout << "Enter width of the Rectangle: ";
  cin >> w;
  cout << "The area of the Rectangle is " <<areaOfRectangle(l,  w) <<endl;
}
else if (n == 3){
  cout << "Triangle \n";
  cout << "Enter base of the Triangle: ";
  cin >> b;
  cout << "Enter height of the Triangle: ";
  cin >> h;
  cout << "The area of the square is " <<areaOfTriangle(b,  h) <<endl;
}
else if (n == 4){
  cout << "Quit program. Good day! ";
   break;
}
else{
  cout << "Your input was: " <<n<< "  which is an invalid input Please enter a valid input!!! \n";

}
 }

 }