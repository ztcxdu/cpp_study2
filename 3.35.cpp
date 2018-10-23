#include <iostream>

int main(){
    using namespace std;
    
    int a[10];
    
    //int *p = a;
    
    for(auto i : a){
        cout << i <<endl;
    }
    
    cout << endl;
    for(int *p = a; p != end(a); p++){
        *p = 0;
        
    }
    /*
    for(int i = 0; i < sizeof(a) / sizeof(a[0]); i++){
        *(p + i) = 0;
    }*/
    
    for(auto i : a){
        cout << i <<endl;
    }
    
    cout << endl;
    cout << *(end(a) + 1000) << endl;
    *(end(a) + 1000) = 0;
    
    return 0;
}
