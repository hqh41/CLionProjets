#include <iostream>
using namespace std;


int func(int a){
    int count = 0;
    while(a){
        count++;
        a = a & (a-1);
    }
    return count;
}


int main() {
    cout << func(911) << endl;
}