//double pointer is used to store address of another pointer
#include<iostream>
using namespace std;
int main(){
int i=5;
int* ptr=&i;
int **p=&ptr;
cout<<ptr<<endl;//address of i
cout<<p<<endl;//addresssss of ptr
cout<<&i;//address of i
cout<<*p<<endl;//adress stored by ptr ie. address of i
cout<<**p<<endl;//vaue stored by ptr
return 0;
}