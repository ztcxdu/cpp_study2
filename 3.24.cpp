#include <iostream>
#include <vector>

int main(){
    using namespace std;
    
    vector<int> nums;
    int temp;
    
    cout << "Please input some integers end with q:";
    while(cin >> temp){
        if(temp == 'q'){
            break;
        }else{
            nums.push_back(temp);
        }
    }
    
    if(nums.begin() == nums.end()){
        cout << "No element!" << endl;
        return -1;
    } 
    /*
    vector<int>::iterator it = nums.end() - 1;
    cout << *it;
    */
    cout << "The array you input is:" << endl;
    for(vector<int>::const_iterator it = nums.cbegin(); it != nums.cend(); it++){
        cout << *it << '\t';
    }
    
    cout << endl;
    for(vector<int>::const_iterator it = nums.cbegin(); it != nums.cend() - 1; it++){
        cout << *it + *(it+1) << '\t';
    }
    
    return 0;
} 
