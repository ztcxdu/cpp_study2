#include<iostream>
#include<forward_list>
#include<cmath>
#include<cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));
    forward_list<int> fl;

    for(int i = 0; i < 20; ++i){
        fl.insert_after(fl.before_begin(),rand() % 100);
    }

    for(auto iter = fl.cbegin(); iter != fl.cend(); ++iter){
        cout << *iter << " ";
    }
    cout << endl;

    auto iter = fl.before_begin();
    auto iter2 = fl.begin();

    while(iter2 != fl.end()){
        if(*iter2 % 2){
            //++iter2;
            //cout << *iter << endl;
            iter2 = fl.erase_after(iter);
        }else{
            iter = iter2;
            ++iter2;
        }
    }

    for(auto iter = fl.cbegin(); iter != fl.cend(); ++iter){
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}
