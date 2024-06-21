#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
    //using constructor

    Node(int data){
        value= data;
        next= NULL;
    }
};



int main(){
    Node* node1= new Node(10);

    cout<<node1->value<<endl;
    cout<<node1->next<<endl;

}