#include <iostream>

int fact(int);

int main(){
    using namespace std;
    
    int num;
    cout << "Please input a number:";
    cin >> num;
    
    cout << fact(num);
}

int fact(int num){
    for(int i = num -1; i != 0; --i){
        num *= i;
    }
    return num;
}
