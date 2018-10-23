#include <iostream>

unsigned myCnt();

int main(){
    using namespace std;
    
    char ch;
    
    while(cin >> ch){
        cout << myCnt() << endl;
    }
}

unsigned myCnt(){
    static unsigned iCnt = -1;
    ++ iCnt;
    return iCnt;
}
