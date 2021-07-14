#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int> & nums, int k) {
    vector<int> result;
    int n;
    int temp;
    temp=nums[0];
    nums[0]=nums[n-1];
    nums[n-1]=temp;
    for(int i=n-1;i>1;i--){
        swap(nums[i],nums[i-1]);
    }
    vector <int> result;
    for(int i=0;i<n;i++){
        result.push_back(nums[i]);
    }return result;
        
    }
int main(){
     vector<int> result
    vector<int> nums{1,2,3,4,5};
    auto result= rotate(nums[],1);
    for(auto v:result){
        cout<<v<<",";
        cout<<endl;
    }
}