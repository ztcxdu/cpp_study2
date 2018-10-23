#include <iostream>
#include <sstream>
#include <string>
#include <stdexcept>

using namespace std;

istream &f(istream &in){
    int v;
    while(in >> v && !in.eof()){
        if(in.bad()){
            throw runtime_error("IO stream error!");
        }
        if(in.fail()){
            cerr << "Data error please try again!" << endl;
            in.clear();
            in.ignore(100, '\n');
            continue;
        }
        cout << v << endl;
    }
    in.clear();
    return in;
}

int main(int argc, char const *argv[])
{
    ostringstream msg;
    msg << "C++ primer" << endl;
    istringstream in(msg.str());
    f(in);
    cout << "Get";
    return 0;
}

