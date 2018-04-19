#include <iostream>
using namespace std;
#include <vector>

vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vv;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size();){
            int target = nums[i];

            int l = i+1;
            int u = nums.size()-1;

            while(l < u){
                if(nums[l] + nums[u] < target){
                    while(nums[++l] == nums[l-1]);
                }
                else if(nums[l] + nums[u] > target){
                    while(nums[--u] == nums[u+1]);
                }
                else{
                    vector<int> v;
                    vv.push_back(vector<int>{nums[i], nums[l], nums[u]});
                    while(nums[++l] == nums[l-1]);
                    while(nums[--u] == nums[u+1]);
                }
            }
            while(nums[++i] == nums[i-1]);
        }
        return vv;
    }

int main() {
    vector<int> v {1, 2, 3};
    vector<vector<int>> result = threeSum(v);
    for(auto ele : result){
        cout << "[";
        for(auto e : ele){
            cout << e;
        }
        cout << "]" << endl;
    }
    return 0;
}