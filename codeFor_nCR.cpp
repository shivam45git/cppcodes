#include<iostream>
using namespace std;
int factorial(int num){
    int fact=1;
    for(int i=2;i<=num;i++){
        fact*=i;

    }return fact;
}    



int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    int ans=factorial(a)/(factorial(a-b)*factorial(b));
    cout<<a<<"C"<<b<<": ="<<ans<<endl;
    return 0;
}
                                                                                                