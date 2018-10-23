#include <iostream>
#include <vector>

int main(){
    using namespace std;
    
    vector<int> a{0,1,2,3,4,5,6,7,8,9};
    vector<int> b;
    
    for(auto e : a){
        b.push_back(e);
    }
    for(auto i = b.begin(); i != b.end(); i++){
        cout << *i << '\t';
    }
    //const int sz = 10;
    /*
    int ia[] {0,1,2,3,4,5,6,7,8,9};
    int ia2[10];
    //int ia2 = ia;
    //ia2[1] = 100;
    for(int i = 0; i < 10; i++){
        //cout << ia[i] << endl;
        ia2[i] = ia[i];
    }
    for(int i = 0; i < 10; i++){
        cout << ia2[i] << sizeof(ia2) / sizeof(ia2[0]) << endl;
        //ia2[i] = ia[i];
    }*/
    
}
