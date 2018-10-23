#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<char> a{'10'};
    vector<string> b{10,"a"};
    cout << a.size() <<"  " << b.size() << "  " << a[1];
    for(int i = 0; i < b.size(); i++){
        cout << b[i] << endl;
    } 
    
} 
