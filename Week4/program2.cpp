int main()
{
    char names[30][128];
    
    cout << "Enter in up to 30 names, or hit enter to stop " << endl;
    
    for(int row = 0; row < 30; row++){
        
        string str;
        
        getline(cin, str);
        
        if( str.length() == 0){
            break;
        }
        
        else {
        cin.getline(names[row],128);
        }
    }
    
    for (int i = 0; i < 30; i++){
        for (int j = 0; j < 128; j++){
            cout << names[i][j]; 
        }
    }
    

    return 0;
}
