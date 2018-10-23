#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

void add_family(map<string, vector<pair<string, string>>> &smap, const string &family_name){
    if(smap.find(family_name) == smap.end()){
        smap[family_name];
    }
}

void add_child(map<string, vector<pair<string, string>>> &smap, const string &family_name, const string &child_name, const string &birthday){
    smap[family_name].push_back({child_name, birthday});
}

int main(int argc, char const *argv[])
{
    map<string, vector<pair<string, string>>> families;

    add_family(families, "Zhang");
    add_family(families, "Ge");
    add_family(families, "Wang");
    add_family(families, "Liu");
    add_family(families, "Yang");

    add_child(families, "Zhang", "tiancheng", "950821");
    add_child(families, "Ge", "dawei", "1202");
    add_child(families, "Wang", "haoran","4515");
    add_child(families, "Liu", "guohua", "4544");
    add_child(families, "Liu", "haohao", "1212");
    add_child(families, "Yang", "songyue", "7895");
    add_child(families, "Yang", "xiaoyu", "0101");

    for(pair<string, vector<pair<string, string>>> family : families){
        cout << family.first <<"'s children: ";
        for(vector<pair<string, string>>::const_iterator it = family.second.cbegin(); it != family.second.cend(); ++it){
            cout << family.first << it->first << " " << it->second << " ";
        }
        cout << endl;
    }
/*
    vector<int> v{1,2,3,4};
    cout << (v.size() == v.back()) << endl;*/
    return 0;
}
