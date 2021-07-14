#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp;
    temp=a[0];
    a[0]=a[n-1];
    a[n-1]=temp;
    for(int i=n-1;i>1;i--){
        swap(a[i],a[i-1]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}