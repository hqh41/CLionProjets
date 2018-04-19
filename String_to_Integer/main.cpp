#include <iostream>
using namespace std;
#include <math.h>


int myAtoi(string str) {
    int result = 0;
    int size = str.size();
    string::iterator itr = str.begin();

    int count_add = 0;
    int count_moins = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '+')
            count_add++;
        else if(str[i] == '-')
            count_moins++;
    }
    if((count_add - count_moins)%2 == 0){
        itr+=count_add+count_moins;
        while(itr != str.end()){
            if((*itr) != '\0'){
                result += (*itr - '0')*pow(10, size-count_add-count_moins-1);
                itr++;
                size--;
            }
        }
        return result;
    }

    if((count_add - count_moins)%2 == 1){
        itr+=count_add+count_moins;
        while(itr != str.end()){
            if((*itr) != '\0'){
                result += (*itr - '0')*pow(10, size-count_add-count_moins-1);
                itr++;
                size--;
            }
        }
        return result;
    }

    if((count_add - count_moins)%2 == -1){
        itr+=count_add+count_moins;
        while(itr != str.end()){
            if((*itr) != '\0'){
                result += (*itr - '0')*pow(10, size-count_add-count_moins-1);
                itr++;
                size--;
            }
        }
        return (-1)*result;
    }
}

int main() {
    string s = "++---110";
    std::cout << myAtoi(s) << std::endl;
    return 0;
}