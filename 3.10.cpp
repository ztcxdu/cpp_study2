#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
	string a, result;
	getline(cin,a);
	cout <<"输入的字符串是：" << a << endl;
	//int i = 0;
	for(decltype(a.size()) i = 0; i < a.size(); i++){
	    if(!ispunct(a[i])){
	        result += a[i];
	    }
	}
	
	/*
	while(a[i] != '\0'){
	    a[i] = 'X';
	    ++i;
    }*/
	//cout << a[a.size() + 100] << endl;
	/*
	while(i != a.size()){
		a[i] = 'X'; 
		i++;
	}*/
	/*
	for(int i = 0; i < a.size(); i++){
		a[i] = 'X';
    }
	*/
	//判断是否是标点符号
    /* 
	for(auto &c : a){
		if(!ispunct(c)){
		    cout << c;
		}
	} */
	a = result;
	cout <<"替换后的字符串是：" << a << endl; 
	return 0;
} 
