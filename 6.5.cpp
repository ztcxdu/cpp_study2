#include <iostream>
#include <cmath>

double abs1(double);
double abs2(double);

int main(){
    using namespace std;
    
    double num;
    cout << "Please input a number:";
    cin >> num;
    cout << abs1(num) << endl;
    cout << abs2(num) << endl;
}

double abs1(double val){
    if(val < 0){
        return -val;
    }else{
        return val;
    }
}

double abs2(double val){
    return abs(val);
}
