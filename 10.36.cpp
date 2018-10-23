#include<iostream>
#include<list>
#include<fstream>
#include<algorithm>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream f_in(argv[1]);
    //list<int> li;
    vector<int> vi;
    int tmp;

    while(f_in >> tmp){
        vi.push_back(tmp);
    }

    for(auto it = vi.cbegin(); it != vi.cend(); ++it){
        cout << *it << " ";
    }
    cout << endl;
/*
    auto zero = find(li.crbegin(), li.crend(), 0);
    cout << *zero << endl;
*/
    vector<int>::reverse_iterator r_it(vi.begin() + 2);
    vector<int>::reverse_iterator re_it(vi.begin() + 8);
    list<int> li;

    copy(re_it, r_it, back_inserter(li));

    for(auto it = li.cbegin(); it != li.cend(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
