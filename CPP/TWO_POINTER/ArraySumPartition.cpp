#include<iostream>
#include<vector>
using namespace std;
int IsPartition(vector<int> v){
    int vsum=0;
    for(int ele:v){vsum+=ele;}
    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
        if(v[i]==vsum-v[i]){
            return 1;
            break;
        }

    }
    return 0;
}
int main(){
    
    cout<<"enter array total elements: ";int n;
    cin>> n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cout<<"enter element: ";
        cin>>v[i];
    }
    if(IsPartition(v)==false){
        cout<<"partition not possible";

    }
    else{
        cout<<"partition possible";
    }
    return 0;
}