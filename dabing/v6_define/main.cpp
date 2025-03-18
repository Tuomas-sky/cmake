
#include<iostream>
using namespace std;

int main(){

    int num = 5;
#ifdef DEBUG
    cout << "this is debug process" << endl;
#endif
    for (int i = 0; i < num;i++){
        cout << "I'm num " << i + 1 << "." << endl;
    }
}
