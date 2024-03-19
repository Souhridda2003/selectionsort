#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={5,1,5,5,2,3};
    int n=6;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int x=0;
    for(int i=0;i<n;i++){
        x*=10;
        x+=arr[i];
    }
    cout<<x;
    cout<<endl;
    for(int i=n-1;i>0;i--){
        if(arr[i]!=arr[i-1]){
            swap(arr[i],arr[i-1]);
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int y=0;
    for(int i=0;i<n;i++){
        y*=10;
        y+=arr[i];
    }
    cout<<y<<endl;
    cout<<"addition was "<<x+y;
}
