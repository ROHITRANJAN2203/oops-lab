#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1st no:";
    cin>>a;
    cout<<"enter 2nd no:";
    cin>>b;
    cout<<"enter 3rd no:";
    cin>>c;
    if(a>b && b>c){
        cout<<a<<"is largest";
        
    }
    if(b>c && b>a){
        cout<<b<<"is largest";

    }
    if(c>a && c>b){
        cout<<c<<"is largest";

    }
    

}