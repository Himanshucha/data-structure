

// queue using linked list
struct qnode{
    int data;
    qnode *next;
    qnode (int x){
        data=x;
        next=NULL;
    }
};
struct queue1{
    qnode *front,*rear;
    queue1(){
        front=rear=NULL;
    }
    void enqueue(int x){
        qnode *temp=new qnode(x);
        if(rear==NULL){
            front=rear=temp;
        }else{
            rear->next=temp;
            rear=temp;
        }
    }
    void dequeue(){
        if(front==NULL){
            return;
        }
        front=front->next;
        if(front==NULL){
            rear=NULL;
        }
    }
    void display(){
        if(front==NULL && rear==NULL){
            cout<<"Queue is empty";
            return;
        }
        qnode *temp= front;
        while(temp!=NULL){
            cout<<temp->data<<"   ";
            temp=temp->next;
        }
        cout<<"\n";
    }
};
int main(){
    queue1 q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.enqueue(x);
    }
    q.display();
    q.dequeue();
    q.display();
}


// dequeue
#include <iostream>
using namespace std;
struct qnode{
    int data;
    qnode *next,*prev;
    qnode(int x){
        data=x;
        next=prev=nullptr;
    }
};
void insertbyfront(qnode **front,qnode** rear,int x){
    qnode *temp=new qnode(x);
    if(*front==nullptr){
        *front=*rear=temp;
    }
    else{
        temp->next=*front;
        (*front)->prev=temp;
        *front=temp;
    }
}
void deletebyfront(qnode **front){
    if(*front==nullptr){
        cout<<"queue is null";
        return ;
    }
    *front=(*front)->next;
    (*front)->prev=nullptr;

}
void deletebyrear(qnode **rear){
    if(*rear==nullptr){
        cout<<"queue is null";
        return ;
    }
    *rear=(*rear)->prev;
    (*rear)->next=nullptr;

}
void insertbyrear(qnode** front ,qnode** rear,int x){
    qnode* temp=new qnode(x);
    if(*front==nullptr){
        *front=*rear=temp;
    }
    else{
        (*rear)->next=temp;
        temp->prev=*rear;
        *rear=temp;
    }
}
void displaybyfront(qnode *front){
    while(front!=nullptr){
        cout<<front->data<<" ";
        front=front->next;
    }
    cout<<"\n";
}
void displaybyrear(qnode *rear){
    while(rear!=nullptr){
        cout<<rear->data<<" ";
        rear=rear->prev;
    }
    cout<<"\n";
}
int main(){
    qnode *front=nullptr,*rear=nullptr;
    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        insertbyrear(&front,&rear,x);
    }
    displaybyrear(rear);
    deletebyrear(&rear);
    displaybyrear(rear);
}
