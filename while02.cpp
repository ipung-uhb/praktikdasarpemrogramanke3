#include <iostream>
using namespace std;

int main(){
    int saldo = 10000;
    while(saldo > 1000){
        cout<<"Masih ada saldo, jajan lagi!"<<endl;
        saldo = saldo-1000;
    }
    return 0;
}
