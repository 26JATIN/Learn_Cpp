#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
}*first;

void create(int a[] ,int n){
    int i;
    struct Node *t,*last;
    first = new Node;
    first ->data=a[0];
    first ->next=NULL;
    last=first;


    for(i=1;i<n;i++){
        t=new Node;
        t->data=a[i];
        t->next= nullptr;
        last->next=t;
        last=t;
    }
}
void display(struct Node* p){
    for(;p!=NULL;){
        cout<<p->data<<endl;
        p=p->next;
    }
}
int main(){
    int a[]= {1,2,3,4,5};
    create(a,5);
    display(first);
}