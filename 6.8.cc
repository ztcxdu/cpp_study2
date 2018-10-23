#include "6.8.h"

int fact(int num){
    for(int i = num -1; i != 0; --i){
        num *= i;
    }
    return num;
}
