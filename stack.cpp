#include <bits/stdc++.h>
using namespace std;
// using array
// int push(int arr[],int top,int value,int size){
//     if(top==size-1){
//         cout<<"size overflow";
//         exit(1);
//     }
//     arr[++top]=value;
//     return top;
// }
// int pop(int arr[],int top){
//     if(top==-1){
//         exit(1);
//     }
//     top--;
//     return top;
// }
// int peek(int arr[],int top){
//     if(top==-1){
//         exit(1);
//     }
//     return arr[top];
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int top=-1;
//     for(int i=0;i<n;i++){
//         int a;
//         cin>>a;
//         top=push(arr,top,a,n);
//     }
//     for(int i=0;i<=top;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     top = pop(arr,top);
//     for(int i=0;i<=top;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     int peekvalue=peek(arr,top);
//     cout<<endl<<peekvalue;
// }

// using linkedlist
struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=nullptr;
    }
};
node *push(node *top,int x){
    node *temp=new node(x);
    if(top==nullptr){
        return temp;
    }
    temp->next=top;
    return temp;
}
node *pop(node *top)
{
    if(top == nullptr)
        return top;
    return top->next;
}
int peek(node* top){
    if(top==nullptr){
        exit(1);
    }
    return top->data;

}
void print(node *top){
    node *curr=top;
    while(curr!=NULL){
        cout<<curr->data;
        curr=curr->next;
        cout<<"    ";
    }
}
int main(){
    node *top;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        top=push(top,a);
    }
    // top = pop(top);
    print(top);
}