#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums;
    int temp;
    cout << "请输入";
    char cont = 'y';
    while(cin >>  temp){
        nums.push_back(temp);
        cout << "ÊÇ·ñ¼ÌÐøÊäÈë£¿(y/n)";
        cin >> cont;
        if(cont != 'y' && cont != 'Y'){
            break;
        }
        cout << "Çë¼ÌÐøÊäÈë£º"; 
    }
    for(int i = 0; i < nums.size() - 1; i++){
        cout << "µÚ" << i + 1 << "¸öÊýºÍµÚ" << i + 2 << "¸öÊýµÄºÍÊÇ£º" << nums[i] + nums[i + 1] << endl;
    }
    for(int i = 0; i < nums.size() / 2 + 1; i++){
        cout << "µÚ" << i + 1 << "¸öÊýºÍµÚ" << nums.size() - i  << "¸öÊýµÄºÍÊÇ£º" << nums[i] + nums[nums.size() - i -1] << endl;
    }
} 
