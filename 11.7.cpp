#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

void add_family(map<string, vector<string>> &smap, const string &family_name){
    if(smap.find(family_name) == smap.end()){
        smap[family_name] = vector<string>();
    }
}

void add_child(map<string, vector<string>> &smap, const string &family_name, const string &child_name){
    smap[family_name].push_back(child_name);
}

int main(int argc, char const *argv[])
{
    map<string, vector<string>> families;

    add_family(families, "Zhang");
    add_family(families, "Ge");
    add_family(families, "Wang");
    add_family(families, "Liu");
    add_family(families, "Yang");

    add_child(families, "Zhang", "tiancheng");
    add_child(families, "Ge", "dawei");
    add_child(families, "Wang", "haoran");
    add_child(families, "Liu", "guohua");
    add_child(families, "Liu", "haohao");
    add_child(families, "Yang", "songyue");
    add_child(families, "Yang", "xiaoyu");

    for(pair<string, vector<string>> family : families){
        cout << family.first <<"'s children: ";
        for(auto it = family.second.cbegin(); it != family.second.cend(); ++it){
            cout << family.first << *it << " ";
        }
        cout << endl;
    }
    return 0;
}
