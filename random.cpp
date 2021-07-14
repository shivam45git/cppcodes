#include<iostream>
#include<vector.
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        for(int i=0; i<nums1.size();i++){
            merge.push_back(i);
        }
        for(int j=0; j<nums2.size();j++){
            merge.push_back(j);
        }
        int median;
        int n=merge.size();
        if((merge.size()%2)==0){
            median=(merge[(n/2)-1] + merge[n/2])/2 ;
        }
        else{
            median=merge[(n/2)+1];
        }
        return median;
    }
int main()
{
   int nums1=[1,2];
   int nums2=[3,];
   cout<<findMedianSortedArrays(nums1,nums2);
   return 0;


}
