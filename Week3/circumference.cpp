#include <iostream>
using namespace std;

const double PI = 3.1415;

double calculateCircumference(double radius);

int main ()
{
   double input = 0;
   double result = 0;
   
   while (1) {
       cout << "Enter a radius of a circle and I will tell you the Circumference. " << endl;
       cout << "Enter 0 to quit" << endl;
       cin >> input;
       
       if (input == 0){
           break;
       }
       
       else{
       result = calculateCircumference(input);
       
       cout << "A circle with " << input << " radius has a circumference of " << result << ". " << endl;
       }
   
   }
   
   return 0;
}

double calculateCircumference(double radius){
    
    double circumference = 2 * PI * radius;
    
    return circumference;
    
}
