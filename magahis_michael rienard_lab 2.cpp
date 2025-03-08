#include <iostream>

using namespace std;



typedef struct Node{
string songName;
Node *link;
}Node;

Node *createNode(string data){
    Node *newNode = new Node;
    newNode->songName = data;
    newNode->link = NULL;
    return newNode;
}

void traverse(Node *head){


Node *temp = new Node;
 temp =head;

cout << "My playlist" <<endl;
while(temp != NULL){
cout << temp->songName<< "->" <<endl;
if(temp->link == NULL){
    cout << "NULL" <<endl;
}        
temp = temp->link;
    }
}
Node *insertAtEnd(string data, Node *head){
if (head == NULL){
Node *newNode = createNode(data);
head = newNode;
cout << "A new node has been inserted at the end \n" << endl;
return head;
    }
    Node *temp = new Node;
    temp = head;

    while(temp->link != NULL){
        temp = temp->link;
    }
    Node *head = createNode("Sanctuary by joji");
  Node *insertAtBegining(string data, Node *head){
Node *newNode = createNode(data);
head = newNode;
cout << "A new node has been inserted at the begining \n" << endl;
return head;
  }  

int main(){
    Node *head = createNode("Sanctuary by joji");
    head = insertAtEnd("Sunday Morning by Maroon 5")
    traverse(head);
    return 0;
}