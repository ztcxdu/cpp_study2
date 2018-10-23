#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

bool isShorter(const string &s1, const string &s2){
    return s1.size() < s2.size();
}

void print(const vector<string>::const_iterator &beg, const vector<string>::const_iterator &end){
    for(vector<string>::const_iterator it = beg; it != end; ++it){
        cout << *it << " ";
    }
    cout << endl;
}

void print(const vector<string> &v){
    for(vector<string>::const_iterator it = v.cbegin(); it != v.cend(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}

bool shorterThanFour(const string &it){
    return (it.size() < 4);
}

int main(int argc, char const *argv[])
{
    vector<string> sv = {"hello", "world", "the", "red", "green", "xidian", "university", "songyao"};

    sort(sv.begin(), sv.end());
    print(sv);

    stable_sort(sv.begin(), sv.end(), isShorter);
    print(sv);

    auto iter = partition(sv.begin(), sv.end(), shorterThanFour);
    print(sv.cbegin(), iter);



    return 0;
}
