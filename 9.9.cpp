#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v1(10,10);
    vector<int> v2;
    cout << v2.at(0) << endl;
    cout << v2.front() <<endl
         << *v2.begin();
    /*
    vector<int>::iterator it = v1.begin();
    swap(v1, v2);
    cout << *it << " " << v1.capacity() << endl;
    //it++;
    /*
    vector<int> v2 = {3, 2, 1};
    auto it1 = v1.begin();
    auto it2 = v2.begin();
    auto it3 = v1.cbegin();
    auto it4 = v2.cbegin();*/
    return 0;
}
