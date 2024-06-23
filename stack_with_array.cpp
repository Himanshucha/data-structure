#include <bits/stdc++.h>
using namespace std;

int push(int arr[],int top,int value,int size){
    if(top==size-1){
        cout<<"size overflow";
        exit(1);
    }
    arr[++top]=value;
    return top;
}
int pop(int arr[],int top){
    if(top==-1){
        exit(1);
    }
    top--;
    return top;
}
int peek(int arr[],int top){
    if(top==-1){
        exit(1);
    }
    return arr[top];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int top=-1;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        top=push(arr,top,a,n);
    }
    for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<" ";
    }
    top = pop(arr,top);
    for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<" ";
    }
    int peekvalue=peek(arr,top);
    cout<<endl<<peekvalue;
}
