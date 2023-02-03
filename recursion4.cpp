#include<iostream>
using namespace std;
//reverse string
void func(string &str,int i,int n){
    if(i>(n-i-1)){
        return ;
    }
    swap(str[i],str[n-i-1]);
    func(str,i+1,n);
}
//check palindrome
bool palindrome(string& str,int i,int n){
    if(i>(n-i-1)){
        return true;
    }
    if(str[i]!=str[n-i-1]){
        return false;
    }
    else{
        return palindrome(str,i+1,n);

    }
}
//power
int pow(int a,int b){
    if(a==0){
        return 1;

    }
    return b*pow(a-1,b);
}
//optimised power of a^b
int pow2(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans=pow2(a,b/2);
    if(b%2==0){
        return ans*ans;
    }
    if(b%2!=0){
        return a*ans*ans;
    }
}
//loop bubble sort
void bubble(int *arr,int n){
    for(int i=0;i<n-i;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

}
//recursive bubble sort
void bubb(int *arr,int n){
    if(n==0||n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubb(arr,n-1);
}
//selection sort
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
//insertion sort
void insertion(int *arr,int n ){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;

        for(;j>=0;j--){
            if(temp<arr[j]){
                arr[j+1]=arr[j];

            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
//mergesort

void merge(int* arr,int s,int e){
    int mid=(s+e)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    int *a=new int[l1];
    int *b=new int[l2];
    int t=s;
    for(int i=0;i<l1;i++){
        a[i]=arr[t++];
    }
    t=mid+1;
    for(int j=0;j<l2;j++){
        b[j]=arr[t++];
    }
    int i=0;
    int j=0;
    int k=s;
    while(i<l1&&j<l2){
        if(a[i]>b[j]){
            arr[k]=b[j];
            k++;
            j++;
        }
        else{
            arr[k]=a[i];
            k++;
            i++;
        }
    }
    while(i<l1){
        arr[k]=a[i];
            k++;
            i++;
            
        
    }
    while(j<l2){
        arr[k]=b[j];
            k++;
            j++;
    }
}
void mergesort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
    
}
int main(){
    int arr[5]={1,3,2,4,5};
    mergesort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }


    return 0;

}