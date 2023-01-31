//recursion is called calling of function itself
#include<iostream>
using namespace std;
//factorial program
int fact(int n){
    //base case
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
//power of 2
int pow(int n){
    if(n==0){
        return 1;
    }
    return 2*pow(n-1);
}
//counting upto given number{(tail recursion)}
int count(int n){
    if(n==1){
        return  1;
    }
    cout<<n;
    count(n-1);
    
}
//counting number head recursion
void hcount(int n){
    if(n==0){
        return ;
    }
    hcount(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    hcount(n);
    return 0;
}