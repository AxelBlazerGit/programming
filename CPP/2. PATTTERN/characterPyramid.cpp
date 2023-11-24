// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,i,j;
    cout<<"enter count: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<char(j+64);
        }
        cout<<endl;
    }
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            cout<<" ";

        }
        for(j=1;j<2*(n-i);j++){
            cout<<char(j+64);
        }
        cout<<endl;
    }

    return 0;
}