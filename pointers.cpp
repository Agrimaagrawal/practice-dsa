#include<iostream>
using namespace std;
int print1(int *p){
    cout<<p+1;
}
int getSum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int  main(){
    /*
    int a=0;

    int *s=&a;
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    
    cout<<*(arr+1);
    cout<<*arr;
    //in case of int array arr will print address of it
     char ch[3]="ac";
     cout<<ch;
     //in case of char array name of that array will print string written in it
    cout<<ch[1];
    cout<<ch[3];
    */
    int x=8;
    int *p=&x;
    print1(p);
     int arr[10]={1,2,3,4,5,6,7,8,9,0};
     cout<<getSum(arr,10);


    return 0;
}