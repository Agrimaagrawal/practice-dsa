//refernce variable is variable having different names but pointing to same address
#include<iostream>
using namespace std;
//pass by value(there will be no change in n because it creates copy of the variable)
void fun(int n){
    n++;
}
void fun2(int& n){
    n++;
}
int main(){
    int i=5;
    cout<<i;
    //reference variable declaration
    int &j=i;
    cout<<j;

    int n=9;
    cout<<"before:"<<n<<endl;
    fun(n);
    cout<<"after:"<<n<<endl;
    int p=8;
    cout<<"before:"<<p<<endl;
    fun2(p);
    cout<<"after:"<<p<<endl;

    return 0;
}