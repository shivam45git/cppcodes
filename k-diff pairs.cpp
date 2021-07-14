#include<iostream>
#include<cstdlib>
using namespace std;
int main({
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        int count =0;
        for(j=0;j<n;j++){
            if(abs(arr[i]-arr[j])==k)
            {
                count+=1;
            }
        }
    }cout<<"total pairs are :"<<count;
}