#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

int main(){
    using namespace std;
    
    vector<int> nums;
    srand((unsigned)time(NULL));//������������� 
    for(int i = 0; i < 100000; i++){
        nums.push_back(rand() % 1000);//�������ʮ������ 
    }
    
    cout << "The numbers before are:";
    for(vector<int>::const_iterator it = nums.cbegin(); it != nums.cend(); it++){
        cout << *it << '\t';
    }
    cout << endl;
    /*
    int temp;
    cout << "Please input some integers:" << endl;
    while(cin >> temp){
        if(temp < 0){
            break;
        }
        nums.push_back(temp);
    }
    */
    for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++){
        *it *= 2;
    }
    
    cout << "The numbers after are: ";
    for(vector<int>::const_iterator it = nums.cbegin(); it != nums.cend(); it++){
        cout << *it << '\t';
    }
    cout << endl;
    
    return 0;
}
