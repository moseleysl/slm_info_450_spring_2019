void to_upper_case(char &letter){
    
    
    if (letter == 'a'){ 
        letter = 'A';
    }
    else if (letter == 'b'){ 
        letter = 'B';
    }
    else if (letter == 'c'){ 
        letter = 'C';
    }
    else if (letter == 'd'){ 
        letter = 'D';
    }
    else if (letter == 'f'){ 
        letter = 'F';
    }
    else{ 
        cout << "We have to go back... we've made a terrible mistake." << endl;
    }
    
    cout << letter << " uppercased" << endl;
}
