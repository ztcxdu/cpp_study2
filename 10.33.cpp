#include<iostream>
#include<vector>
#include<iterator>
#include<fstream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{   
    srand((unsigned)time(NULL));
    
    ofstream out1(argv[2]), out2(argv[3]), out3(argv[1]);
    ostream_iterator<int> out_it1(out1, " "), out_it2(out2, "\n"), out_it3(out3," ");
    vector<int> vi;

    if(!out3){
        cout << "Initialize input error!" << endl;
        exit(1);
    }

    for(int i = 0; i < 100000; ++i){
        *out_it3++ = rand() % 100;
    }
    out3.close();

    ifstream in(argv[1]);
    istream_iterator<int> int_it(in), eof;

    if(!in){
        cout << "Open read file error!"<< endl;
        exit(1);
    }

    if(!out1){
        cout << "Open write file error!" << endl;
        exit(1);
    }

    if(!out2){
        cout << "Open write file error!" << endl;
        exit(1);
    }

    while(int_it != eof){
        if(*int_it % 2){
            *out_it1++ = *int_it++;
        }else{
            *out_it2++ = *int_it++;
        }
        
    }
/*
    while(int_it != eof){
        vi.push_back(*int_it++);
    }

    for(auto i : vi){
        if(i % 2){
            *out_it1 = i;
        }else{
            *out_it2 = i;
        }
    }
*/
    return 0;
}
