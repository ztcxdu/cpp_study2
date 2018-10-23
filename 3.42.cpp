#include <iostream>
#include <vector>

int main(){
    using namespace std;
    
    vector<int> a = {1,2,3,4,5,6,7,8,9};
    int b[10];
    
    for(int i = 0; i < a.size(); i++){
        b[i] = a[i];
    } 
    
    for(auto x : b){
        cout << x << "  ";
    }
    return 0;
}
