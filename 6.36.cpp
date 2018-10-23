#include <iostream>
#include <string>

string (&func())[10];
auto func() -> string(&)[10];
string arr[10];
decltype(arr) &func();  

auto arrPtr() -> int(&)[10];

int func(int);
vector<decltype(func)*> vT;
