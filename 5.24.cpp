#include <iostream>
#include <stdexcept>

int main(){
    using namespace std;
    
    int val1, val2;
    while(cin >> val1 >> val2){
        try{
            if(val2 == 0){
                throw runtime_error("not zero");
            }
            cout << val1 / val2 << endl;
        }
        catch(runtime_error err){
            cout << err.what() << endl;
        }
        
    }
    /*
    if(val2 == 0){
        throw runtime_error("除数不能为0");
    }
    
    cout << val1 / val2;*/
    return 0;
}
