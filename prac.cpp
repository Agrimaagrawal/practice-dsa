#include<iostream>
using namespace std;
void selections(int *arr,int n){
    if(n==0){
        return;
    }
    for(int i=1;i<n;i++){
        if(arr[0]>arr[i]){
            swap(arr[0],arr[i]);
        }
    }
    selections(arr+1,n-1);
}

int main(){
    int arr[5]={1,2,3,4,5};
    selections(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    cout<<*arr;
    return 0;
}