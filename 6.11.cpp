#include <iostream>

void reset(int*);

int main(){
    using namespace std;
    
    int i = 989;
    int *p = &i;
    reset(&i);
    cout << i; 
}

void reset(int *val){
    *val = 0;
} 
