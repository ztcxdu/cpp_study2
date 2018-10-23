#include<iostream>
#include<list>
#include<string>

using namespace std;

void rm_dups(list<string> &ls){
    ls.sort();
    ls.unique();
}