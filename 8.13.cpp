#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>

using namespace std;

struct PersonInfo{
    string name;
    vector<string> phones;
};

string format(const string &s){return s;}

bool valid(const string &s){return true;}

int main(int argc, char const *argv[])
{
    string line, word, fileName = argv[1];
    //cout << ""
    vector<PersonInfo> people;
    istringstream record;
    ifstream input(fileName);
    
    if(!input){
        cout <<"Open file error!" << endl;
    }


    while(getline(input, line)){
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

    ostringstream os;
    for(const PersonInfo &entry : people){
        ostringstream formated, badnums;
        for(const string &nums : entry.phones){
            if(!valid(nums)){
                badnums << " " << nums;
            }else{
                formated << " " << format(nums);
            }
        }
        if(badnums.str().empty()){
            os << entry.name << " " << formated.str() << endl;
        }else{
            cerr << "input error: " << entry.name << " invalid number(s) " << badnums.str() << endl;
        }
    }
/*
    for(vector<PersonInfo>::iterator it = people.begin(); it != people.end(); ++it){
        cout << it -> name << " " ;
        for(vector<string>::iterator itp = it -> phones.begin(); itp != it -> phones.end(); ++itp){
            cout << *itp << " ";
        }
        cout << endl;
    }
*/

    cout << os.str() << endl;
    return 0;
}
