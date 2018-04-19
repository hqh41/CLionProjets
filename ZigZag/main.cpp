#include <iostream>
using namespace std;

string convert(string s, int numRows) {
    string s1 = "";
    int p = 1;
    int i = 0;
    char** a = new char*[numRows];
    for(int m = 0; m < numRows; m++){
        a[m] = new char[s.size()];
    }

    for(int w = 0; w < numRows; w++){
        for(int x = 0; x < s.size(); x++){
            a[w][x] = '0';
        }
    }

    for(; i < numRows-1; i++){
        a[i][0] = s[i];
    }

    while(i<s.size()){
        for(int j = numRows-1; j >= 0; j--){
            a[j][(numRows-1)*p-j] = s[i];
            i++;
        }
        for(int j = 1; j <= numRows-2; j++){
            a[j][(numRows-1)*p] = s[i];
            i++;
        }
        p++;
    }

    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < s.size(); j++){
            if(a[i][j] != '0' && a[i][j] != '\0')
                s1.push_back(a[i][j]);
        }
    }
    return s1;
}

int main() {
    string s = "PAYPALISHIRING";
    cout << convert(s, 4) << endl;
    return 0;
}