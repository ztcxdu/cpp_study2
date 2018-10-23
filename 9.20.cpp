#include<iostream>
#include<cstdlib>
#include<ctime>
#include<list>
#include<deque>

using namespace std;

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));

    list<int> li;
    deque<int> od, ed;

    for(int i = 0; i < 20; ++i){
        li.push_back(rand() % 100);
    }

    for(list<int>::const_iterator it = li.cbegin(); it != li.cend(); ++it){
        if((*it) % 2){
            od.push_back(*it);
        }else{
            ed.push_back(*it);
        }
    }

    for(auto it = li.cbegin(); it != li.cend(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    for(auto it = od.cbegin(); it != od.cend(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    for(auto it = ed.cbegin(); it != ed.cend(); ++it){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
