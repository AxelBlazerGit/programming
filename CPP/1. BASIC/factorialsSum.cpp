// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,i,j,sum=0,f=1;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            f*=j;
        }
        sum+=f;
        f=1;
    }
    cout<<sum;
    return 0;
}