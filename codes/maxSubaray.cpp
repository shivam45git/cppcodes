#include<iostream>
using namespace std;
int main()
{   int arr[]={-1,2,3,4,-2,6,-8,3};
    int maxsum=0;
    for(int i=0;i<8;i++){
        int j=1;
        int sum=0;
        while(j<8){
            sum+=sarr[j];
            if(sum>maxsum){
                sum=maxsum;
                j++;
            }
        }
    }cout<<maxsum<<endl;
    return 0;
}
