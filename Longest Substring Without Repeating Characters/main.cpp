#include <iostream>
using namespace std;

void Find(string str, int begin, int& max){
    string s;
    for(int i = begin; i < str.size(); i++){
        if(s.find(str[i]) == -1){
            s.push_back(str[i]);
            if(s.size() > max)
                max = s.size();
        }else{
            Find(str, begin+1, max);
            return;
        }
    }
    return;
}

int lengthOfLongestSubstring(string s){
        int max = 0;
        Find(s, 0, max);
        return max;
    }

int main() {
    string s = "c";
    std::cout << lengthOfLongestSubstring(s) << std::endl;
    return 0;
}