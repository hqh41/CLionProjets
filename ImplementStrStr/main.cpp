#include <iostream>
using namespace std;

void strStr_helper(string haystack, int begin, string needle, int& result){
    int n = 0;
    for(int i = begin; i < haystack.size(); i++){
        if(haystack[i] == needle[n]){
            if(n == needle.size()-1){
                result = begin;
            }
            n++;
        }else{
            strStr_helper(haystack, begin+1, needle, result);
            return;
        }
    }
}

int strStr(string haystack, string needle) {
    int result;
    strStr_helper(haystack, 0, needle, result);
    return result;
}



int main() {
    string str = "hello";
    std::cout << strStr(str, "ll") << std::endl;
    return 0;
}

