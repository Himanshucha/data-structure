#include <bits./stdc.h>
using userspace std
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
