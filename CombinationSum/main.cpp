#include <iostream>
using namespace std;
#include <vector>

void combination(vector<int>& candidates, int target, vector<int>& v, vector<vector<int>>& result, int begin){
    if(target == 0){
        result.push_back(v);
        return;
    }
    for(int i = begin; i < candidates.size(); i++){
        if(target < candidates[i])
            return;
        v.push_back(candidates[i]);
        combination(candidates, target-candidates[i], v, result, i);
        v.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> v;
        sort(candidates.begin(), candidates.end());
        combination(candidates, target, v, result, 0);
        return result;
    }




int main() {
    vector<int> v{1, 2, 3};
    vector<vector<int>> result;
    result = combinationSum(v, 6);
    for(auto ele : result){
        for(auto e : ele){
            cout << e << ',';
        }
        cout << endl;
    }
    return 0;
}