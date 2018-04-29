#include <iostream>
using namespace std;
#include <vector>

void permute_helper(vector<int>& nums, int begin, vector<vector<int>>& rec){
    if(begin >= nums.size()){
        rec.push_back(nums);
        return;
    }
    for(int i = begin; i < nums.size(); i++){
        swap(nums[begin], nums[i]);
        permute_helper(nums, begin+1, rec);
        swap(nums[begin], nums[i]);
    }
}

string getPermutation(int n, int k) {
        vector<vector<int>> rec;
        vector<int> nums;
        for(int i = 1; i <= n; i++){
            nums.push_back(i);
        }
        permute_helper(nums, 0, rec);
        string s = "";
        /*for(auto e : rec[k-1]){
            s += e+'0';
        }*/
        for(auto ele : rec){
            for(auto e : ele){
                s += e+'0';
            }
        }
        return s;
    }

int main() {
    std::cout << getPermutation(3, 3) << std::endl;;
    return 0;
}