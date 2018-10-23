#include<iostream>
#include<forward_list>
#include<string>

using namespace std;

void fl_work(forward_list<string> &fl, const string &str1, const string &str2){
    auto iter = fl.begin();
    auto iter2 = fl.before_begin();
    while(true){
        if(iter == fl.end()){
            fl.insert_after(iter2, str2);//两个if语句顺序不可调换，因容器的尾后迭代器会指向0x0这个地址，这是保留用来表示无效的地址，不会分配实际空间的。所以取这个地址的解引用时就会崩溃。
            return;
        }else if(*iter == str1){
            fl.insert_after(iter, str2);
            return;
        }else{
            iter2 = iter;
            ++iter;
        }
    }
}


int main(int argc, char const *argv[])
{
    forward_list<string> fl = {"a", "b", "c", "d"};
    string str1 = "a", str2 = "b";
    
    fl_work(fl, str1, str2);

    for(auto iter = fl.cbegin(); iter != fl.cend(); ++iter){
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}
