#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
//#include<cstddef>

using namespace std;

ostream &print(vector<int> &v){
    for(auto it = v.cbegin(); it != v.cend(); ++it){
        cout << *it << " ";
    }
    return cout;
}

int main(int argc, char const *argv[])
{//
    map<string, vector<int>> msv;
    vector<int> v = {1,2,3};

    pair<map<const string, vector<int>>::iterator, bool> ret = msv.insert({"word",{1,2,1}});
    if(!ret.second){
        cout << "Already existed!" << endl;
    }

    cout << ret.first -> first << " ";
    print(ret.first -> second) << endl;
    return 0;
}
