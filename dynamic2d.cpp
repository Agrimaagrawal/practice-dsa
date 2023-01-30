#include<iostream>
using namespace std;
int main(){
    /*int n;
    cin>>n;
    //dynamic 2d array declaration
    int **arr= new int *[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
    }
    //releasing heap memory
    for(int i=0;i<n;i++){
        delete []arr[i];
    }
    delete []arr;
*/

    //declaration of 2d array with different rows and column
    int row,col;
    cin>>row>>col;
    int **arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
    //input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    //output
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j];
        }
    }
    //releasing heap memory
    for(int i=0;i<row;i++){
        delete []arr[i];
    }
    delete []arr;
    
    return 0;
    
}