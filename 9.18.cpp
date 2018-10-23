#include<iostream>
#include<deque>

using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    deque<string> dq;

    while(cin >> str){
        dq.push_back(str);
    }

    for(deque<string>::const_iterator it = dq.cbegin(); it != dq.cend(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
