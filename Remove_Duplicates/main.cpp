#include <iostream>
using namespace std;
#include <vector>

int removeDuplicates(vector<int>& nums) {
    for(int i = 0; i < nums.size()-1; i++){
        if(nums[i] == nums[i+1]){
            nums.erase(nums.begin()+i+1);
            i--;
        }
    }
    return nums.size();
}

int main() {
    vector<int> a{};
    std::cout << removeDuplicates(a) << std::endl;
    return 0;
}