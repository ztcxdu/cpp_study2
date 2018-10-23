#include<iostream>
#include<fstream>
#include<vector>
#include<iterator>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream in(argv[1]);
    istream_iterator<int> int_it(in), eof;
    vector<int> v;

    if(!in){
        cout << "Open file error!" << endl;
        exit(1);
    }

    while(int_it != eof){
        v.push_back(*int_it++);
    }

    for(vector<int>::const_reverse_iterator it = v.crbegin(); it != v.crend(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    for(vector<int>::const_iterator r_it = v.cend(); r_it != v.cbegin();){
        cout << *(--r_it) << " ";
    }
    cout << endl;

    return 0;
}
