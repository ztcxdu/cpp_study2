#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){
    using namespace std;
    
    const int sz = 5;
    int a[sz], b[sz], i;
    srand((unsigned) time (NULL));
    
    for(int i = 0; i < sz; i++){
        a[i] = rand() % 10;
    }
    
    cout << "System generated 5 numbers between 0 and 9, now please input what you guess:";
    
    for(int i = 0; i < sz; i++){
        cin >> b[i];
    }
    
    cout << "Numbers system generated are:";
    for(auto e : a){
        cout << e << '\t';
    }
    cout <<endl;
    
    cout << "Numbers you guess are:       ";
    for(auto e : b){
        cout << e << '\t';
    }
    cout <<endl;
    
    int *p = a;
    int *q = b;
    while(p != end(a)){
        if(*p != *q){
            cout << "You are wrong!";
            return -1;
        }
        p++;
        q++;
    }
    cout << "You are right!";
    /*
    for(int i = 0; i < sz; i++){
        if(a[i] != b[i]){
            cout << "You are wrong!";
            break;
        }
        cout << "You are right!";
    }*/
    
    return 0;
}
