#include <iostream>
#include <vector>
typedef int arrT[10];
using namespace std;

void print(vector<int> v, unsigned index){
    unsigned sz = v.size();
    if(!v.empty() && index < sz){
        #ifndef NDEBUG 
        cout << v[index] << endl;
        #endif
        print(v, index + 1);
    }
}

//string (&(func()))[10];

int main(){
    vector<int> vint = {1, 2, 3, 4, 5, 6};
    print(vint, 0);
    
    arrT a;
    cout <<a[9];
    return 0;
}
