#include<iostream>

using namespace std;

vector<int> findMissing(const vector<int> &nums){

    int size = nums.size();

    if(size == 0) return {};

    int diff = nums[0];

    vector<int> ans;

    for(int i=0; i<size; i++){

        if(nums[i]-i != diff){

            while(nums[i] - i > diff){
                ans.push_back(i+diff);
                diff++;
            }
        }
    }
    return ans;
}

int main(){

    vector<int> nums = {1,2,4,5,7,8,9,14};

    vector<int> miss = findMissing(nums);

    for(int i : miss) cout<<i<<" ";

return 0;
}