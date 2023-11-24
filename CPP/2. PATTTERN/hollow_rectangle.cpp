#include<iostream>
using namespace std;
int main(){
    int rows,columns;
    cout<<"Enter RowCount and ColumnCount:";
    cin>>rows>>columns;
    for(int i=1;i<=rows;i++){
        if(i==1 || i== rows){
            for(int j=1;j<=columns;j++){
                cout<<"%";
            }
        }
        else{
            for(int j=1;j<=columns;j++){
                if(j==1 || j==columns){
                    cout<<"%";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}