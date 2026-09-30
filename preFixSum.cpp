#include<bits/stdc++.h>
using namespace std;

void prefixSum(vector<int>&nums,vector<int>&prefix){
    int sum = nums[0];
    prefix[0] = nums[0];
    for(int i = 1;i<nums.size();i++){
        sum += nums[i];
        prefix[i] = sum;
    }
}

int main(){
    vector<int>nums{1,2,3,4,5};
    vector<int>prefix(nums.size());
    prefixSum(nums,prefix);
    int start,end;
    cout<<"Enter starting index : ";
    cin>>start;

    cout<<"Enter ending index : ";
    cin>>end;
    int betSum;
    cout<<"My Array : ";
    for(int &ele:nums){
        cout<<ele<<" ";
    }
    cout<<"\n";
    cout<<"Prefix Sum Array : ";
    for(int &ele:prefix){
        cout<<ele<<" ";
    }
    cout<<"\n";
    if(start>end){
        swap(start,end);
    }

    if((start<0 || start>nums.size()-1) || (end<0 || end>nums.size()-1)){
        cout<<"Enter valid index!!!";
    }
    else{
        if(start == 0){
            betSum = prefix[end];
        }
        else{
        betSum = prefix[end]-prefix[start-1];
        }
        cout<<"The sum of My Array between "<<start<<" index and "<<end<<" index is : ";
        cout<<betSum<<endl;
    }
    


    return 0;
}