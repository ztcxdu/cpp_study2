#include<iostream>
#include<fstream>
#include<map>
#include<string>
#include<algorithm>
#include<cstddef>

using namespace std;

int main(int argc, char const *argv[])
{
    ifstream in(argv[1]);
    map<string, size_t> wordCount;
    multimap<string, int> wordCount2;
    string word;

    if(!in){
        cout << "Open file error!" << endl;
    }

    while(in >> word){
        //map返回一个pair
        pair<map<const string, size_t>::iterator, bool> ret = wordCount.insert({word,1});
        
        //multimap返回迭代器
        multimap<string, int>::iterator it = wordCount2.insert({word, 1});
        cout << it -> first << endl;

        if(!ret.second){
            ++ret.first -> second;
        }
    }
/*
    while(in >> word){
        ++wordCount[word];
    }
*/
    for(const pair<string, size_t> &i : wordCount){
        cout << i.first << " occurs " << i.second << " times" << endl;
    }

    for(map<const string, size_t>::iterator it = wordCount.begin(); it != wordCount.end(); ++it){
        cout << it -> first << " occurs " << it -> second << " time" << endl;
    }
    return 0;
}
