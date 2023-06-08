#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int val){
        size=size+1;
        int i=size;
        arr[i]=val;
        while(i>1){
            int parent=i/2;
            if(arr[parent]<arr[i]){
                swap(arr[parent],arr[i]);
                i=parent;
            }
            else{
                return;
            }

        }
    }
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i];
        }
    }
};
int main(){
    heap h;
    h.insert(34);
    h.insert(30);
    h.insert(90);
    h.insert(23);
    h.print();
    return 0;

}