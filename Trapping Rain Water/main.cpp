#include <iostream>
using namespace std;
#include <vector>

int trap(vector<int>& height) {
    int result = 0;
    vector<int> containLeft(height.size(), 0);
    vector<int> containRight(height.size(), 0);
    int left_max = 0;
    int right_max = 0;

    for(int i = 0; i < height.size(); i++){
            containLeft[i] = left_max;
            left_max = max(left_max, height[i]);
    }
    for(int i = height.size()-1; i >=0; i--){
        containRight[i] = right_max;
        right_max = max(right_max, height[i]);
    }
    for(int i = 0; i < height.size(); i++){
        int x = min(containLeft[i], containRight[i]);
        int a = x - height[i] > 0 ? x - height[i] : 0;
        result += a;
    }
    return result;
}

int main() {
    vector<int> v{0,1,0,2,1,0,1,3,2,1,2,1};
    std::cout << trap(v) << std::endl;
    return 0;
}