#include<iostream>
using namespace std;
int main(){
    int a,b,bk;
    cout<<"Enter First No. : ";
    cin>>a;
    cout<<"Enter Second No. : ";
    cin>>b;
    bk=a;
    a=b;
    b=bk;
    cout<<"Swapped Numbers: "<<a<<" , "<<b<<endl;
    return 0;
}