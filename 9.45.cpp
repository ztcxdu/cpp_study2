#include<iostream>
#include<string>

using namespace std;

string &name_string(string &name, const string &prefix, const string &suffix){
    name.insert(name.begin(), 1, ' ');
    name.insert(name.begin(), prefix.begin(), prefix.end());
    name.append(" ");
    name.append(suffix.begin(), suffix.end());
    return name;
}

int main(int argc, char const *argv[])
{
    string name = "songyao", a = "Mr.", b = "Jr.";
    name_string(name, a, b);
    cout << name << endl;
    return 0;
}
