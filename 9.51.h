#ifndef DATE_H_INCLUDE
#define DATE_H_INCLUDE

#include<iostream>
#include<string>
#include<stdexcept>

using namespace std;

class Date{
public:
    friend ostream& operator <<(ostream&, const Date&);
    
    Date() = default;
    Date(string &ds);

    unsigned y() const {return year;}
    unsigned m() const {return month;}
    unsigned d() const {return day;}

private:
    unsigned year, month, day;
};

const string month_name[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

const string month_abbr[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sept", "Oct", "Nov", "Dec"};

const int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

inline int get_month(string &ds, int &end_of_month){
    int i, j;
    for(i = 0; i < 12; ++i){

        for(j = 0; j < month_abbr[i].size(); j++){
            if(ds[j] != month_abbr[i][j]){
                break;
            }
            if(j == month_abbr[i].size()){
                break;
            }
        }

        if(i == 12){
            throw invalid_argument("illegal month!");
        }

        if(ds[j] == ' '){
            end_of_month = j + 1;
            return i + 1;
        }

        for(;j < month_name[i].size(); ++j){
            if(ds[j] != month_name[i][j])
                break;
        }

        if(j == month_name[i].size() && ds[j] == ' '){
            end_of_month = j + 1;
            return i + 1;
        }
        
        throw invalid_argument("illegal month!");
    }
}
#endif // DATE_H_INCLUDE