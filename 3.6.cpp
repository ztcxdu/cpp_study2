#include <iostream>
#include <string>

using namespace std;

int main(){
	string a;
	getline(cin,a);
	cout <<"������ַ����ǣ�" << a << endl;
	int i = 0;
	while(a[i] != '\0'){
	    a[i] = 'X';
	    ++i;
    }
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
	
	/*
	for(auto &x : a){
		x = 'X';
	} */
	cout <<"�滻����ַ����ǣ�" << a << endl; 
	return 0;
} 
