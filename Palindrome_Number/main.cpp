#include <iostream>
using namespace std;
#include <deque>
#include <math.h>

bool isPalindrome(int x) {
    if(x < 0)
        return false;
    int i, j, size = 0;

    deque<int> d;

    while(x != 0){
        d.push_front(x%10);
        x = x/10;
        size++;
    }

    for(int i = 0; i < (double)(size/2); i++){
        if(d[i] != d[size-1-i])
            return false;
    }
    return true;
}


int main() {
    int p = 10101;
    cout << (isPalindrome(p) == true? "true" : "false") << endl;
    return 0;
}