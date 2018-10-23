#include <iostream>
#include <string>

using namespace std;

class Person{

friend istream &read(istream &is, Person &p);
friend ostream &print(ostream &os, const Person &p);
friend Person add(const Person &a, const Person &b);

public:
    Person() = default;
    Person(const string &s) : strName(s) {}
    Person(const string &s, const string &a) : strName(s), strAddress(a) {}
    //Person(istream &is){is >> this -> strName >> this -> strAddress;}
    ~Person(){}
    void setName(string str){
        strName = str;
    }
    void setAddress(string str){
        strAddress = str;
    }
    string getName() const{
        return this -> strName;
    }
    
    string getAddress() const{
        return this -> strAddress;
    }
    
    private:
        string strName;
        string strAddress;
    
};

istream &read(istream &is, Person &p){
    is >> p.strName >> p.strAddress;
    return is;
}

ostream &print(ostream &os, const Person &p){
    os << p.strName << '\t' << p.strAddress << endl; 
    return os;
}

Person add(const Person &a, const Person &b){
    Person sum;
    sum.setName(a.strName + b.strName);
    sum.setAddress(a.strAddress + b.strAddress);
    return sum;
}

int main(){
    Person g("diaozi","xidian"), h("你好");
    //Person l(cin);
    //int a, b;
    //g.setName("diaozi");
    //g.setAddress("xidian");

    cout << g.getName() << '\t';
    cout << g.getAddress() << endl;
    read(cin, h);
    print(cout, h);
    Person *l = new Person;
    *l = add(g, h);
    print(cout, *l);
    delete l;
    //int *const ptr = &a;*/
}
