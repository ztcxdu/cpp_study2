#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
	string a, result;
	getline(cin,a);
	cout <<"������ַ����ǣ�" << a << endl;
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
	//�ж��Ƿ��Ǳ�����
    /* 
	for(auto &c : a){
		if(!ispunct(c)){
		    cout << c;
		}
	} */
	a = result;
	cout <<"�滻����ַ����ǣ�" << a << endl; 
	return 0;
} 
