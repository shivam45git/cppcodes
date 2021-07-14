#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    int n;
    unordered_set<int> shiv;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int count =0;
    for(int i=0;i<n;i++){
        
        
        for(int j=i+1;j<n;j++){
            if(abs(arr[i]-arr[j])==k && (shiv.find(arr[i])==shiv.end() or shiv.find(arr[j])==shiv.end()))
            {   shiv.insert(arr[i]);
                shiv.insert(arr[j]);
                count+=1;
                cout<<arr[i]<<arr[j];
                cout<<endl;
            }
            
            
        }
        
    }cout<<count;
    return 0;
}