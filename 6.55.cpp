#include <iostream>
#include <vector>

int func1(int, int);
int func2(int, int);
int func3(int, int);
int func4(int, int);
void compute(int, int, int(*)(int, int)); 

int main(){
    
    //way1
    
    int (*p1)(int, int) = func1;
    int (*p2)(int, int) = func2;
    int (*p3)(int, int) = func3;
    int (*p4)(int, int) = func4;
    
    //way2
    /*
    decltype(func1) *p1 = func1;
    decltype(func2) *p2 = func2;
    decltype(func3) *p3 = func3;
    decltype(func4) *p4 = func4;*/
    
    compute(4, 5, p1);
    compute(4, 5, p2);
    compute(4, 5, p3);
    compute(4, 5, p4);
}

int func1(int i, int j){
    return i + j;
}

int func2(int i, int j){
    return i - j;
}

int func3(int i, int j){
    return i * j;
}

int func4(int i, int j){
    return i / j;
}

void compute(int a, int b, int(*p)(int, int)){
    using namespace std;
    
    cout << p(a,b) << endl;
}
