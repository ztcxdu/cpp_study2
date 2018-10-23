#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main(int argc, char const *argv[])
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> iv;
    list<int> il;


    for(int *p = begin(ia); p != end(ia); ++p){
        iv.push_back(*p);
        il.push_back(*p);
    }

    vector<int>::iterator it = iv.begin();
    while(it != iv.end()){
        if(*it & 1){
            it = iv.erase(it);
        }else{
            ++it;
        }
    }

    list<int>::iterator it1 = il.begin();
    while(it1 != il.end()){
        if(!(*it1 & 1)){
            it1 = il.erase(it1);
        }else{
            ++it1;
        }
    }

    for(auto it = iv.cbegin(); it != iv.cend(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    for(auto it = il.cbegin(); it != il.cend(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
