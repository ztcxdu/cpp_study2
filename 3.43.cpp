#include <iostream>

int main(){
    using namespace std;
    
    int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    
    //way 1
    /*
    for(int (&row)[4] : ia){
        for(int &col : row){
            cout << col << '\t';
        } 
        cout << endl;
    }*/
    
    //way 2
    /*
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << ia[i][j] << '\t';
        }
        cout << endl;
    }*/
    
    //way 3

    int (*ptr_a)[4] = &ia[0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << *(*(ptr_a + i) + j) << '\t';
        }
        cout << endl;
    }
 

    return 0;
}
