#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<string> str;
    string temp;
    char judge;
    cout << "������һЩ���ʣ�" << endl;
    while(cin >> temp){
        str.push_back(temp);
        cout << "�Ƿ��������y/n��";
        cin >> judge;
        if(judge != 'y' && judge != 'Y'){
            break;
        }
    }
    for(auto &s : str){
        for(auto &c : s){
            c = toupper(c);
        }
    }
    for(auto s : str){
        cout << s <<endl;
    } 
} 
