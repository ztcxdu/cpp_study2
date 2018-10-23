#include <iostream>
#include <cstring>

int main(){
    using namespace std;
    
    char str1[] = "hello ";
    char str2[] = "world";
    char str3[strlen(str1) + strlen(str2) - 1];
    
    strcpy(str3, str1);
    strcat(str3, str2);
    
    cout << str3;
    
}
