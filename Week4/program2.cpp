#include <iostream>
#include <stdio.h>

using namespace std;

const int STUDENTS = 30;
const int SIZE = 128;

int main()
{
    int i = 0;
    int total = 0;
    char names[STUDENTS][SIZE];
    
    for(i = 0; i < STUDENTS; i++){
        strcpy(names[i], "");
    }
    
    for(i = 0; i < STUDENTS; i++){
        
        cout << "Enter in up to 30 names, or hit enter to stop " << i << " :";
        cin.getline(names[i],SIZE);
        
        if(!strcmp("/0" , names[i]) ){
            break;
        }
        
        total++;
       // cout << i << endl;
    }
    
    for (i = 0; i < total; i++){
            cout <<  "Names[" << i << "] = " << names[i] << endl;
    }
    
}
