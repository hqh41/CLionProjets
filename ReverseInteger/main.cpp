#include <iostream>
using namespace std;
#include <vector>
#include <math.h>

int reverse(int x){
    if(x == 0)
        return 0;
    long long result = 0;
    int sig = 1;
    if(x < 0){
        sig = -1;
        x = -x;
    }
    vector<int> v;
    while(x != 0){
        int b = x%10;
        v.push_back(b);
        x = x/10;
    }
    int a = v.size()-1;
    for(int i = 0; i < v.size(); i++){
        if(a < 0)
            break;
        result += v[i] * pow(10, a);
        a--;
    }

    return sig * result;
}

int main() {
    std::cout << reverse(1534236469) << std::endl;
    return 0;
}