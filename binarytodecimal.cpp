#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n){
    int answer=0;
    int x=1;
    while(n>0){
        int y=n%10;
        answer+=x*y;
        x*=2;
        n/=10;

    }return answer;
}
int main(){
    int n;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;
    return 0;
}