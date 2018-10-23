#include <iostream>
#include <initializer_list>

using namespace std;

void count(initializer_list<int> il){
    
    for(auto it= il.begin(); it != il.end(); ++it){
        cout << *it << endl;
    }
} 

int main(){
    count({1, 2, 3});
}
