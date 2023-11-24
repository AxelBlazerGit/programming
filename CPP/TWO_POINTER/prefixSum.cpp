#include<iostream>
#include<vector>
using namespace std;
void prefixSum(vector<int> &v){
    for(int i=v.size()-1;i>-1;i--){
        int s=0;
        for(int j=0;j<=i;j++) {
            s+=v[j];

        }
        v[i]=s;
    }

}
int main(){
    vector<int> v{1,2,3,4,5,6};
    prefixSum(v);
    for(int ele:v){
        cout<<ele<<" ";
    }
    return 0;
}