#include <iostream>

int main(){
    using namespace std;
    
    //const char *ca = "hello";
    //cout << (void)ca << endl;    
    const char ca[] {'h','e','l','l','o','\0'};
    cout << sizeof(ca);
    const char *cp = ca;
    while(*cp){
        cout << *cp << endl;
        ++cp;
    }
}
