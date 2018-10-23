#include<iostream>
#include<bits/stl_multiset.h>
#include<map>

class Sales_data{
public:
    int compareIsbn(const Sales_data &, const Sales_data &);
};

int main(int argc, char const *argv[])
{
    multiset<Sales_data, decltype(compareIsbn)*> bookstore(compareIsbn);
    typedef bool (*pf)(const Sales_data &, const Sales_data &);
    multiset<Sales_data, pf> bookstore(compareIsbn);
    return 0;
}
