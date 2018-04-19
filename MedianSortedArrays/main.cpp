#include <iostream>
using namespace std;
#include <vector>

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        double sum = 0.0;
        while(i != nums1.size() && j != nums2.size()){
            if(nums1[i] < nums2[j])
                i++;
            else{
                nums1.insert(nums1.begin()+i, nums2[j]);
                j++;
            }
        }
        while(j != nums2.size()){
            nums1.push_back(nums2[j]);
            j++;
        }
    if(nums1.size() % 2 == 1){
        return nums1[(nums1.size() - 1) / 2];
    }else{
        return ((double)nums1[(nums1.size() - 2) / 2] + (double)nums1[nums1.size() / 2])/2;
    }
}


int main() {
    vector<int> v1{1, 3};
    vector<int> v2{2, 4};
    cout << findMedianSortedArrays(v1, v2) << endl;
}