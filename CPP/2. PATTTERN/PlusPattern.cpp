#include<iostream>
using namespace std;
int main(){
    int i,n,j;
    cout<<"Enter No. of Peripheries: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    
    for(j=1;j<=2*n+1;j++){

        cout<<"*";
    }
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }

    return 0;
}