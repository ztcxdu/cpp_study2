#include <iostream>
#include <string>
#include <vector>
#include <fstream>

int main(){
    using namespace std;
    
    string fileName;
    cout << "Please input file name:";
    getline(cin, fileName);
    
    ifstream in(fileName);
    if(!in){
        cout << "Open file error!" << endl;
        return -1;
    }
    
    string line;
    vector<string> word;
    while(getline(in, line)){
        word.push_back(line);
    }
    in.close();
    
    for(vector<string>::iterator it = word.begin(); it != word.end(); ++it){
        cout << *it << endl;
    }
    
    return 0;
}

