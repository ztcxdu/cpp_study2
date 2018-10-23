#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>
#include<cstdlib>
#include<iterator>

using namespace std;

int main(int argc, char const *argv[])
{
    srand((unsigned)time(NULL));
    vector<int> iv;
    vector<int> iv2(10000);
    
    for(int i = 0; i < 10000; ++i){
        iv.push_back(rand() % 100);
    }



   
    //replace(iv.begin(), iv.end(), 1, 0);
    replace_copy(iv.cbegin(), iv.cend(), iv2.begin(), 0, 0);
    sort(iv.begin(), iv.end());
    iv.erase(unique(iv.begin(), iv.end()),iv.end());

    //copy(iv.cbegin(), iv.cend(), back_inserter(iv2));
    cout << iv.size() << " " << iv2.size() << " " << (iv2 == iv) << endl;
   // auto it = back_inserter(iv2);
    //back_insert_iterator<vector<int>> it(iv2);
    //*it = 10;
    /*it = 20;

    cout << &*it << endl;
    cout << &*iv2.begin() << endl;
    //fill_n(back_inserter(iv2), 10 , 1);
    //fill_n(iv.begin(), iv.size(), 0);
    //cout << equal(iv.cbegin(), iv.cend(), iv2.cbegin());
    cout << accumulate(iv2.cbegin(), iv2.cend(), 0.0) << endl;
/*
    for(int i = 0; i < 100; ++i){
        cout << "times " << i << " shows is: "<< count(iv.begin(), iv.end(), i) << endl;
    }
    */
    
    
    return 0;
}
