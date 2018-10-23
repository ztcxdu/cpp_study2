#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int main(){
    using namespace std;
    
    const int sz = 10;
    int a[sz];
    srand((unsigned) time(NULL));
    
    for(int *p = a; p != end(a); p++){
        *p = rand() % 10;
        cout << *p << "  ";
    }
    cout << endl;
    
    vector<int> v(begin(a),end(a));
    
    for(vector<int>::const_iterator it = v.cbegin(); it != v.cend(); it++){
        cout << *it << "  ";
    }
    cin >> a[1];
    return 0;
}
