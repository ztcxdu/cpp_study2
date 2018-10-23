#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    string fileName;
    cout << "Please input file name:";
    getline(cin, fileName);

    ifstream in(fileName);
    if(!in){
        cerr << "Can't open the file!" << endl;
        return -1;
    }

    string line;
    vector<string> words;
    while(getline(in, line)){
        words.push_back(line);
    }

    in.close();

    for(vector<string>::iterator it = words.begin(); it != words.end(); ++it){
        istringstream line_str(*it);
        string word;
        while(line_str >> word){
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}

