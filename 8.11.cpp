#include<iostream>
#include<sstream>
#include<string>
#include<vector>

using namespace std;

struct PersonInfo{
    string name;
    vector<string> phones;
};

int main(int argc, char const *argv[])
{
    string line, word;
    vector<PersonInfo> people;
    istringstream record;

    while(getline(cin, line)){
        PersonInfo info;
        record.clear();
        record.str(line);
        //cout << record.str();
        record >> info.name;
        while(record >> word){
            info.phones.push_back(word);
        }
        people.push_back(info);
    }

    for(vector<PersonInfo>::iterator it = people.begin(); it != people.end(); ++it){
        cout << it -> name << " " ;
        for(vector<string>::iterator itp = it -> phones.begin(); itp != it -> phones.end(); ++itp){
            cout << *itp << " ";
        }
        cout << endl;
    }

    return 0;
}
