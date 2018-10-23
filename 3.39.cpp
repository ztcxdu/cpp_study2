#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    
    char str1[100], str2[100];
    cout << "PLease input 2 strings:";
    cin >> str1 >> str2;
    int result = strcmp(str1, str2);
    
    switch(result){
    case 1:
        cout << "The first string is bigger than the second!";
        break;
    case -1:
        cout << "The second string is bigger than the first!";
        break;
    default:
        cout << "Undefined!";
        break;
    }
    return 0;
}
