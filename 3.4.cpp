#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1, str2;
	while(true) {
		cout <<"�����������ַ�����";
		cin >> str1 >> str2;
		if(str1 == str2) {
			cout <<"�����ַ������"<< endl;
		} else if(str1 > str2) {
			cout << "str1 > str2" <<endl;
		} else if(str1 < str2) {
			cout <<"str1 < str2" << endl;
		} else {
			cout << "NONE"<< endl;
		}
		cout << "str1�ĳ����ǣ�" << str1.size() <<endl;
		cout << "str2�ĳ����ǣ�" << str2.size() <<endl;
		str1 += str2;
		cout << str1 << endl;
	}
	return 0;
}
