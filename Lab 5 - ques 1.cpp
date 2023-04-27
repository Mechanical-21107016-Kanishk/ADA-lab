#include<bits/stdc++.h>
using namespace std;

vector<int> findsquare(vector<int> &nums, int n){

    vector<int> ans;
    for(int i =0; i<n; i++) {
        ans.push_back(pow(nums[i], 2));
    }
    sort(ans.begin(), ans.end());

    return ans;
}

int main(){

    vector<int> nums;
    int n;
    cin>>n;
    int num;
    for(int i=0; i<n; i++){
        
        cin>>num;
        nums.push_back(num);
    }

    vector<int> res = findsquare(nums, n);

    for(auto ele: res){
        cout<<ele<<" ";
    }

    return 0;
}
