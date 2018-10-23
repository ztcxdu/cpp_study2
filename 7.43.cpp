#include <iostream>
#include <vector>

class NoDefault{
    
public:
    NoDefault(const int i) : sth(i) {}
    int sth;
};

class C{
    
public:
    C(const int i = 0) : something(i){}
    NoDefault something;
};


int main(){
    using namespace std;
    
    C c(100);
    vector<C> vec(10);
    cout << c.something.sth;
}

