#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node *pre;
    node(int x){
        data=x;
        next=NULL;
        pre=NULL;
    }
};
node *insertatend(node *head,int x){
    node *temp=new node(x);
    if(head==nullptr){
        return temp;
    }
    node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    temp->pre=curr;
    return head;
}
void print(node *head){
    node *curr=head;
    while(curr!=nullptr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main(){
    node* head;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        head=insertatend(head,a);
    }
    print(head);
}


// double linked list by list in stl
// int main(){
//     list<int> l;
//     for(int i=0;i<5;i++){
//         int x;
//         cin>>x;
//         l.push_back(x);
//     }
//     list <int>::iterator p;
//     for(p=l.begin();p!=l.end();p++){
//         cout<<*p<<" ";
//     }
    
// }