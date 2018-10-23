#include <iostream>
#include <string>

using namespace std;

int main(){
    string line;
    cout << "please input:";
    while(getline(cin, line)){
        cout << line << endl;
    }
}

