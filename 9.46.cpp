#include<iostream>
#include<string>

using namespace std;

string &name_string(string &name, const string &prefix, const string &suffix){
    name.insert(0, 1, ' ');
    name.insert(0, prefix);
    name.insert(name.size(), " ");
    name.insert(name.size(), suffix);
    return name;
}

int main(int argc, char const *argv[])
{
    string name = "songyao", a = "Mr.", b = "Jr.";
    name_string(name, a, b);
    cout << name << endl;
    return 0;
}