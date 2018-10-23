#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<char> vc = {'h', 'e', 'l', 'l', 'o'};
    string s(vc.data(), vc.size());
    cout << vc.data() << " " << s << endl;
    return 0;
}
