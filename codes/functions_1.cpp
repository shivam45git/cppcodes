#include<iostream>
using namespace std;
int sum(int num){
    int add=0 ;
    for(int i=1;i<=num;i++){
        add+=i;
    }
    return add;
    
    

}
    



int main()
{
    int n;
    cin>>n;
    int ans=sum(n);
    cout<<ans<<endl;
    return 0;
}