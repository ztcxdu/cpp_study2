#include <iostream>
#include <string>

using namespace std;

bool exist_upper(const string& s){
    for(char i : s){
        if(i >= 65 && i <= 90){
            return true;
        }
    }
    return false;
}

string &to_lower(string &s){
    for(char &i : s){
        if(i >= 65 && i <= 90){
            i += 32;
        }
    }
    return s;
}

int main(){
    
    string str;
    
    cout << "Please input a string without blank:";
    cin >> str;
    
    cout << exist_upper(str) << endl;
    
    to_lower(str);
    cout << str;
    
    return 0;
}
