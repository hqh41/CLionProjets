#include <iostream>
using namespace std;

int lengthOfLongestSubstring(string s){
    int count = 0;
    int max = 0;
    string s1 = "";
    for(auto i = s.begin(); s.end() != i; i++){
        for(auto j = i; j < s.end(); j++){
            if(s1.find(*j)== -1){
                s1+=(*j);
                count++;
                if(count > max)
                    max = count;
            }else
                break;
        }
        count = 0;
        s1.clear();
    }
    return max;
}


int main() {
    string s = "pwwkew";
    cout << lengthOfLongestSubstring(s) << endl;
}

