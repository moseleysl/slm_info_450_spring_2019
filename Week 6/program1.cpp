#include <iostream>

#include <cstdlib.h>

using namespace std;

class Employee
{
    private:
        char fName[64];
        char lName[64];
        bool hEmployee = false;
        double compensation = 0.0;
        
    public:
        void set_compensation ( double comp_in){
            compensatiion = comp_in;
        }
    
        void set_fName(char* name_in){
            strcpy(fName, name_in);
        }
    
        void set_lName(char* name_in){
            strcpy(lName, name_in);
        }
    
        void set_hourlyEmp(bool* emp_in){
            hEmployee = emp_in;
        }
    
        void printLine(){
            cout << lName << ", ";
            cout << fName << ": ";
        
            if (hEmployee){
                cout << "$ " << compensatiion * 2000.0 << endl;
            }
        
            else {
                cout << "$ " << compensatiion << endl;
            }
        }
};

int main()
{
    
}
