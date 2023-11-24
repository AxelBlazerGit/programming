#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter Grid Width: ";
    cin>>num;
    for(int i=1;i<num+1;i++){
        for(int j=i;j<num+1;j++){
            cout<<j;
        }
        for(int j=0;j<i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    return 0;
}