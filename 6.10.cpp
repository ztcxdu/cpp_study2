#include <iostream>

void change(int*, int*);

int main(){
    using namespace std;
    
    int a = 1;
    int b = 2;
    int *val1 = &a;
    int *val2 = &b;
    
    cout << *val1 << '\t' << *val2 << endl;
    /*
    int *temp = nullptr;
    temp = val1;
    val1 = val2;
    val2 = temp;
    */
    change(val1, val2);
    cout << *val1 << '\t' << *val2;
    
    return 0;
}

void change(int *p1, int *p2){
    /*´íÎóÓÃ·¨ 
    int *temp = nullptr;
    temp = p1;
    p1 = p2;
    p2 = temp;*/
 
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp; 
   
}
