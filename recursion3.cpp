#include<iostream>
using namespace std;
//recursive function to find if array is sorted or not
bool sorted(int arr[],int n){
    if(n==0||n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    sorted(arr+1,n-1);
}
//sun of elements of array
int sumofarray(int arr[],int n){
    
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int sum=arr[0]+sumofarray(arr+1,n-1);
    return sum;
}
//linear search
bool linearsearch(int arr[],int n,int target){
    if(n==0){
        return false;
    }
    if(arr[0]==target){
        return true;
    }
    linearsearch(arr+1,n-1,target);



}
//binarysearch
bool binarysearch(int arr[],int s,int e,int target){
    if(s>e){
        return false;
    }
    int mid=(s+e)/2;
    if(arr[mid]==target){
        return true;
    }
    if(arr[mid]<target){
        return binarysearch(arr,mid+1,e,target);

    }
    else{
        return binarysearch(arr,s,mid-1,target);
    }
}
int main(){
    int arr[5]={1,6,3,4,5};
    cout<<binarysearch(arr,0,5,7);
    return 0;

}