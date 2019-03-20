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
    const int MAX = 3;
    Employee entries[MAX];
    
    for (int x=0; x < MAX; x++){
        char *myvalue = (char *)malloc(255);
        
        cout << "Enter first name of employee " << x << endl;
        cin getline(myvalue.255);
        entries[x].set_fName(myvalue);
        
        cout << "Enter last name of employee " << x << endl;
        cin getline(myvalue.255);
        entries[x].set_lName(myvalue);
        
        cout << "Enter Salary or Hourly for employee " << x << endl;
        cin getline(myvalue.20);
        entries[x].set_hourlyEmp( strcmp(myvalue, "Hourly") == 0);
        cout << "Enter compensatiion as per hour if houlry or annually if Salary" << endl;
        cin getline(myvalue.255);
        entries[x].set_compensation( stod(myvalue) );
    }
    
    for (int x = 0; x< MAX; x++){
        entries[x].printLine();
    }
    
    return 0;
}
