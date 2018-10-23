#include<iostream>
#include<list>
#include<forward_list>
#include<cmath>
#include<cstdlib>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));

    const int arraySize = 20;
    list<int> ilst;
    forward_list<int> iflst;
    int tmp[arraySize];

    for(int i = 0; i < arraySize; ++i){
        tmp[i] = rand() % 100;
    }

    for(int i = 0; i < arraySize; ++i){
        ilst.push_back(tmp[i]);
        iflst.push_front(tmp[arraySize -1 -i]);
    }

    for(auto x : ilst){
        cout << x << " ";
    }
    cout <<endl;

    for(auto x : iflst){
        cout << x << " ";
    }
    cout << endl;

    list<int>::iterator iter = ilst.begin();
    while(iter != ilst.end()){
        if(*iter & 1){
            ilst.insert(iter, *iter);
            ++iter;
            //++iter;
        }else{
             iter = ilst.erase(iter);
        }
    }

    forward_list<int>::iterator prev = iflst.before_begin();
    forward_list<int>::iterator curr = iflst.begin();
    while(curr != iflst.end()){
        if(*curr & 1){
            curr = iflst.insert_after(curr, *curr);
            prev = curr;
            ++curr;
        }else{
            curr = iflst.erase_after(prev);
        }
    }
//输出
    for(auto x : ilst){
        cout << x << " ";
    }
    cout <<endl;

    for(auto x : iflst){
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}
