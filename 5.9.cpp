#include <iostream>

int main(){
    using namespace std;
    
    unsigned int vowelCnt = 0;
    char ch;
    cout << "Input some text:";
    while(cin >> ch){
        if(ch == 'a')
            ++vowelCnt;
        if(ch == 'e')
            ++vowelCnt;
        if(ch == 'i')
            ++vowelCnt;
        if(ch == 'o')
            ++vowelCnt;
        if(ch == 'u')
            ++vowelCnt;
    }
    
    cout << vowelCnt;
}
