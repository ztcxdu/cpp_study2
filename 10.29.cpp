#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<iterator>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream in(argv[1]);
    if(!in){
        cout << "Open file error!" << endl;
        exit(1);
    }

    istream_iterator<string> in_iter(in), eof;
    vector<string> words;
    while(in_iter != eof){
        words.push_back(*in_iter++);
    }

    for(auto word : words){
        cout << word << " ";
    }
    cout << endl;
    
    ostream_iterator<string> out_it(cout, " ");

    copy(words.begin(), words.end(), out_it);
    cout << endl;

    for(auto word : words){
        *out_it++ = word;
    }
    cout << endl;
    return 0;
}
