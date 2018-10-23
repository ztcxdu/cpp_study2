#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1, str2;
	while(true) {
		cout <<"请输入两个字符串：";
		cin >> str1 >> str2;
		if(str1 == str2) {
			cout <<"两个字符串相等"<< endl;
		} else if(str1 > str2) {
			cout << "str1 > str2" <<endl;
		} else if(str1 < str2) {
			cout <<"str1 < str2" << endl;
		} else {
			cout << "NONE"<< endl;
		}
		cout << "str1的长度是：" << str1.size() <<endl;
		cout << "str2的长度是：" << str2.size() <<endl;
		str1 += str2;
		cout << str1 << endl;
	}
	return 0;
}
