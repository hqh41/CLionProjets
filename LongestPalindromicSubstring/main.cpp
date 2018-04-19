#include <iostream>
using namespace std;

string longestPalindrome(string s) {
        int max_len = 1;
        int start = 0;
        bool a[s.size()][s.size()];
        fill_n(&a[0][0],s.size()*s.size(),false);
        for(int i = 0; i < s.size(); i++){
            for(int j = 0; j <= i; j++){
                if(i - j < 2)
                    a[j][i] = (s[i] == s[j]);
                else{
                    a[j][i] = (s[i] == s[j] && a[j+1][i-1]);
                }
                if(a[j][i] && max_len < (i-j+1)){
                    max_len = i-j+1;
                    start = j;
                }
            }
        }
        return s.substr(start, max_len);
}

int main() {
    string s = "babad";
    cout << longestPalindrome(s) << endl;
    return 0;
}