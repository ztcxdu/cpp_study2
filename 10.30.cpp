#include<iostream>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>

using namespace  std;

int main(int argc, char const *argv[])
{
    istream_iterator<int> int_it(cin), eof;
    ostream_iterator<int> out_it(cout, " ");
    vector<int> vi; //= {15,454,1,2,6,5,78,45};

    while(int_it != eof){
        vi.push_back(*int_it++);
    }

    sort(vi.begin(), vi.end(), [](const int &a, const int &b){return a < b;});

    unique_copy(vi.begin(), vi.end(), out_it);
    cout << endl;

    return 0;
}
