#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>

using namespace std;
using namespace std::placeholders;

bool word_shorter(const string &s, vector<string>::size_type sz){
    return s.size() <= sz;
}

int biggies(vector<string> &words, vector<string>::size_type sz){

    int bc = count_if(words.begin(), words.end(), bind(word_shorter, _1, sz));
    //int bc = count_if(words.begin(), words.end(), [sz](const string &s){return s.size() >= sz;});
    return bc;
}

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

    stable_sort(sv.begin(), sv.end(), [](const string &beg, const string &end) {return beg.size() < end.size();});
    print(sv);

    auto iter = partition(sv.begin(), sv.end(), [](const string &s) {return (s.size() < 4);});
    print(sv.cbegin(), iter);

    cout << "strings more than 6 is: " << biggies(sv, 6) << endl;


    return 0;
}
