#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v1;
    char cont = 'y';
    int tem;
    while(cin >> tem){
            //cout << tem << endl;
        v1.push_back(tem);
        cout <<"Continue?(y/n)";
        cin >> cont;
        if(cont != 'y' && cont != 'Y'){
            break;
        }
        
    }
    for(auto v : v1){
        cout << v <<'\t';
    }
}
