#include <iostream>

int &get(int *array, int index){
    return array[index];
}

int main(){
    using namespace std;
    
    int a[10];
    get(a,0) = 5;
    cout << a[0];
}
