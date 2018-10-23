#include <iostream>

using namespace std;

void print1(const int*);
void print2(const int*, const int);
void print3(const int*, const int*); 
void print4(const int [], const int);

int main(){
    int i = 0, j[2] = {0, 1};
    
    print1(&i);
    print2(j, sizeof(j) / sizeof(*j));
    print3(begin(j), end(j));
    print4(j, sizeof(j) / sizeof(*j));
    
    return 0;
}

void print1(const int *p){
    cout << *p << endl; 
}

void print2(const int *p, const int sz){
    for(int i = 0; i < sz; ++i){
        cout << *(p + i) << '\t';
    }
    cout << endl;
}

void print3(const int *begin, const int *end){
    for(const int *p = begin; p != end; ++p){
        cout << *p << '\t';
    }
    cout << endl;
}

void print4(const int ia[], int sz){
    for(int i = 0; i < sz; ++i){
        cout << ia[i] << '\t';
    }
    cout << endl;
}
