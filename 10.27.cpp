#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));

    vector<int> iv; //= {0, 1, 2, 2, 3, 3, 4, 5, 5};
    list<int> il;

    for( int i = 0; i < 1000; ++i){
        iv.push_back(rand() % 100);
    }
    sort(iv.begin(), iv.end());
    cout << iv.size() << endl;
    copy(iv.begin(), iv.end(), back_inserter(il));

    //sort(il.begin(), il.end());
    //il.sort();
/*
    for(auto it = il.begin(); it != il.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;*/
    il.sort([] (const int &a, const int &b) {return a > b;});
    cout << il.size() << endl;
    
    for(auto it = il.begin(); it != il.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}
