#include <bits/stdc++.h>
using namespace std;
// int display(int queue[],int front,int rear){
//     while(front!=rear+1){
//         cout<<queue[front]<<"   ";
//         front++;
//     }
// }
// int deletequeue(int queue[],int front,int rear){
//     if(front==rear){
//         cout<<"underflow";
//     }
//     cout<<"\n"<<queue[front]<<"\n";
//     return ++front;
// }
// int main(){
//     int n;
//     cin>>n;
//     int queue[n];
//     int front=-1,rear=-1;
//     for(int i=0;i<n;i++){
//         if(front==-1){
//         front=0;rear=0;
//         }else{
//         rear++;
//         }
//         int data;
//         cin>>data;
//         queue[rear]=data;
//     }
//     display(queue,front,rear);
//     front=deletequeue(queue,front,rear);
//     display(queue,front,rear);
// }
