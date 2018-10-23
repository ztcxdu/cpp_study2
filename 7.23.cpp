#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Screen{
    //friend void Window_mgr::clear(ScreenIndex);
private:
    double width = 0, height = 0;
    string content;
    int cursor;
    mutable size_t access_ctr;
    void do_display(ostream &os) const {
        for(int i = 0; i < width; ++i){
            for(int j = 0; j < height; ++j){
                os << content[i * width + j];
            }
            os << endl;
        }
    }
    
public:
    Screen(const double &w, const double &h) : width(w), height(h), content(h*w,' '){}
    Screen() : Screen(0, 0){}
    Screen(const double &w, const double &h, const char &c) : width(w), height(h), content(h*w,c){}
    ~Screen(){}
    void setWidth(double w){
        this -> width = w;
    }
    void setHeight(double h){
        this -> height = h;
    }
    double getWidth() const{return this -> width;}
    double getHeight() const{return this -> height;}
    string getContent() const{return this -> content;}
    char get() const{return content[cursor];}
    char get(int r, int c) const{
        int row = r * width;
        return content[row + c];
    }
    void some_member() const{
        ++access_ctr;
    }
    Screen &move(int r, int c){
        int row = r*width;
        cursor = row + c;
        return *this;
    }
    Screen &set(char c){
        this -> content[cursor] = c;
        return *this;
    }/*
    void display() const{
        for(int i = 0; i < width; ++i){
            for(int j = 0; j < height; ++j){
                cout << content[i * width + j];
            }
            cout << endl;
        }
    }*/
    Screen &display(ostream &os){do_display(os); return *this;}
    const Screen &display(ostream &os) const {do_display(os); return *this;}
    
};



int main(){
    Screen s(10,10,'a');
    //cout << s.getContent() << endl;
    Screen a(10, 10, 'a');
    //cout << a.getContent() << " " << a.get(2,2) << endl;
    a.move(2,2).set('#').display(cout);
    //cout << a.getContent() << endl;
    //a.display(cout);
    s.display(cout);
}
