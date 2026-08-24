#include <iostream>
#include <vector>
using namespace std;


void getElement(vector<int>& nums, int idx , vector<vector<int>>& ans ){

    if(idx == nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int i=idx; i<nums.size(); i++){
        swap(nums[idx] , nums[i]);
        getElement(nums, idx+1, ans);

        swap(nums[idx], nums[i]);

    }
}

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>>ans;

    getElement(nums , 0, ans);
    
    return ans;
}