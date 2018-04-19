#include <iostream>
using namespace std;

int update(int j){
    return j^0xfedcba98;
}


int main() {
    std::cout << update(update(update(update(2018)))) << std::endl;
    return 0;
}