#include<iostream>
#include<string>

using namespace std;

string &find_match_replace(string &s, const string &oldVal, const string &newVal){
    string::size_type p = 0;
    while((p = s.find(oldVal, p)) != string::npos){
        s.replace(p, oldVal.size(), newVal);
        p += newVal.size();
    }
}

int main(int argc, char const *argv[])
{
    string str = "hello world", a = "hello", b = "world";
    find_match_replace(str, a, b);
    cout << str << endl;
    
    return 0;
}