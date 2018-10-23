#include <iostream>

void swap_pointer1(int*, int*);
void swap_pointer2(int*, int*);
void swap_pointer3(int *&, int *&);

int main(){
    using namespace std;
    
    int i = 1, j =2;
    int *p = &i;
    int *q = &j;
    swap_pointer3(p, q);
    cout << *p << "   " << *q << endl;
    cout << i << "   " <<j << endl;
    
    swap_pointer2(p, q);
    cout << *p << "   " << *q << endl;
    cout << i << "   " <<j << endl;
}


void swap_pointer1(int *val1, int* val2){
    int *tmp = val1;
    val1 = val2;
    val2 = tmp;
}

//���ı�ָ���ָ�򣬸ı�ָ��ָ��ı�����ֵ��  
void swap_pointer2(int *val1, int* val2){
    int tmp = *val1;
    *val1 = *val2;
    *val2 = tmp;
}

//���ı�ָ���ָ�򣬲��ı�ԭָ�������ֵ��
void swap_pointer3(int *&val1, int *&val2){
    int *tmp = val1;
    val1 = val2;
    val2 = tmp;
}
