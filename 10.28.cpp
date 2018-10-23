#include<iostream>
#include<vector>
#include<deque>

using namespace std;

void print(const deque<int> &dq){
    for(auto it = dq.begin(); it != dq.cend(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}

void print(const vector<int> &v){
    for(auto it = v.cbegin(); it != v.cend(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{   
    vector<int> v1, v2, v4;
    deque<int> v3;
    
    for(int i = 1; i < 10; ++i){
        v1.push_back(i);
    }
    
    back_insert_iterator<vector<int>> it2(v2);
    front_insert_iterator<deque<int>> it3(v3);
    insert_iterator<vector<int>> it4(v4, v4.begin());
    /*
    auto it2 = back_inserter(v2);
    auto it3 = front_inserter(v3);
    auto it4 = inserter(v4, v4.end());
*/
    for(auto it = v1.begin(); it != v1.end(); ++it){
        it2 = *it; it3 = *it; it4 = *it;
    }

    print(v2);
    print(v3);
    print(v4);
    return 0;
}
