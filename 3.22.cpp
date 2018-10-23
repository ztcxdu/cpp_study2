#include <iostream>
#include <vector>
#include <string>

int main(int argc, char const *argv[])
{
	using namespace std;
	vector<string> v;
	string s;
	cout << "Please input some strings:";
	while(getline(cin,s)){
	    if(s == ""){
	        break;
        }
		v.push_back(s);
	}
	for(vector<string>::iterator it = v.begin(); it != v.end() && !it->empty(); it++){

		for(string::iterator itc = it -> begin(); itc != it -> end(); itc++){
			*itc = toupper(*itc);
		}
		cout << *it << endl;
	}
	return 0;
}
