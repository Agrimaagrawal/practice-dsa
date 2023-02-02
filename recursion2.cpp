#include<iostream>
using namespace std;
void reachome(int src,int des){
    cout<<src;
    if(src==des){
        cout<<"reached";
        return;
    }
    reachome(src+1,des);
}
//fibonacci number
int fib(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    cout<<n;
    int fibi=fib(n-1)+fib(n-2);
    return fibi;
    
}
//saydigits
void saydigits(int n){
    if(n==0){
        return;
    }
    saydigits(n/10);
      if(n%10==1){
        cout<<"ONE";
      }
      else if(n%10==2){
        cout<<"Two";
      }
      else if(n%10==3){
        cout<<"three";
      }
      else if(n%10==4){
        cout<<"four";
      }
      else if(n%10==5){
        cout<<"five";
      }
      else if(n%10==6){
        cout<<"six";
      }
      else if(n%10==7){
        cout<<"seven";
      }
      else if(n%10==8){
        cout<<"eight";
      }
      else{
        cout<<"nine";
      }
}
int main(){
    int n=512;
    saydigits(n);
    return 0;
}