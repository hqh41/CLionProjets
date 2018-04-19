#include <iostream>
using namespace std;
#include <vector>

int firstMissingPositive(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < 1){
            nums.erase(nums.begin()+i);
            i--;
        }
    }
    if(nums.size() == 0)
        return 1;
    if(nums[0] > 1)
        return 1;
    else{
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] == nums[i+1])
                continue;
            if(nums[i] != nums[i+1]-1)
                return nums[i] + 1;
        }
    }
    return nums[nums.size()-1]+1;
}

int main() {
    vector<int> v{-10, -3, -100, -1000, -239, 1};
    std::cout << firstMissingPositive(v) << std::endl;
    return 0;
}