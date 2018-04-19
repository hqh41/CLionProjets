#include <iostream>
using namespace std;
#include <vector>

void addpar(vector<string>& vec, string s, int n, int m){
    if(n == 0 && m == 0){
        vec.push_back(s);
        return;
    }
    if(m > 0){

        addpar(vec, s+")", n, m-1);
    }
    if(n > 0){

        addpar(vec, s+"(", n-1, m+1);
    }
}

vector<string> generateParenthesis(int n) {
        vector<string> v;
        addpar(v, "", n, 0);
        return v;
    }

int main() {
    vector<string> result = generateParenthesis(3);
    for(auto ele : result){
        cout << "[" << ele << "]" << ", ";
    }
    cout << endl;
    return 0;
}