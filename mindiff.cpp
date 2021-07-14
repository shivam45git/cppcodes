#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string word;
    getline(cin,word);
    int index =s.find(word);
    while(index!=-1){
        cout<<index;
        cout<<endl;
        index=s.find(word,index+1);    }
    return 0;
}