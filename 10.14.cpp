#include<iostream>
//#include<typeinfo>

using namespace std;

void add(int a){
    auto sum = [a] (int b) {return a + b;};
    cout << sum(1) << endl;
}

int main(int argc, char const *argv[])
{
    add(1);
   // auto sum = [] (int a, int b) {return a + b;};
   // cout << sum(1, 2) << endl;
    //cout << typeid(sum).name() << endl;

    return 0;
}
