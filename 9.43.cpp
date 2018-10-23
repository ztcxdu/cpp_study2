#include<iostream>
#include<string>

using namespace std;

string &find_first_match_replace(string &s, const string &oldVal, const string &newVal){
    string::iterator iter = s.begin();
    while(iter != s.end()){
        if(*iter == oldVal[0]){
            int *p = new int;
            for(int i = 1; i < oldVal.size(); ++i){
                if(*(iter + i) == oldVal[i] && ((iter + i) <= s.end())){
                    ++(*p);
                    continue;
                }else{
                    break;
                }
            }
            if(*p == oldVal.size()){
                iter = s.erase(iter, iter + oldVal.size());
                s.insert(iter, newVal.begin(), newVal.end());
                return s;
            }else{
                break;
            }
            delete p;
        }else{
            ++iter;
        }
    }
}

int main(int argc, char const *argv[])
{
    string str = "hello", a = "hello dddddddddddd", b = "world";
    auto iter = str.begin();
    str.erase(iter, iter + 3);
    //find_first_match_replace(str, a, b);
    cout << str << endl;
    
    return 0;
}
