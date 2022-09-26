/*                                                       ASSIGNMENT-02                      \
 SUBMITTED BY:  AKSHAT SHRINATE
 SID         :  21105010
 BRANCH      :  ECE

Q1. While traversing a single-circular linked list, which condition establishes that the traversing
 element/variable has reached the first element?
 A1).Lets solve this question
*/
#include <iostream>
using namespace std;
class Node{                                                           //Node class Creation
    public:
    int data;                                                        //Creating class objects
    Node*next;
    Node(int data){                                                  //To call Node constructor
        this->data=data;
        next=NULL;
    }
};                                                                //Semicolon needed after class definition
                                                                  //Function to insert a node at end on linked list
void insert_node(Node*&head,int data){
    Node*temp=head;
    Node*new_node=new Node(data);                                 //Create a new node and make head as next of it.
    if(temp==NULL)
        {head=new_node;
    new_node->next=head;
    return;}
    while(temp->next!=head)                                      //This condition establishes that the traversing element(temp)
    {temp=temp->next;}                                           // has reached the first element
    temp->next=new_node;
    new_node->next=head;
}

void printLinked_List(Node*&head){                               //Function to print elements of linked list
    Node*temp=head;                                              //from head to the last node
    do{cout<<temp->data<<"->";temp=temp->next;}                  //loop created to print elements
    while(temp!=head);
}

int main(){                                                      //Main()
    Node*head=NULL;                                              // Initialize lists as empty
    insert_node(head,1);                                         //calling insert_node() function
    insert_node(head,8);                                         //calling insert_node() function
    insert_node(head,9);                                         //calling insert_node() function
    printLinked_List(head);                                      //calling  printLinked_List() function
}
/*
With reference to above example of circular linked list.
Line 29 i.e. while(temp->next!=head){temp=temp->next;} Has the required answer.
In circular linked list, the node that points to head of linked list is the end of circular linked list.

[Q.2]  What are the practical applications of a circular linked list? (Try to find applications in your respective fields).
Answer: Practical applications of circular linked list are :

1)Multi player Games: In multiplayer games, each player is represented as a Node in the circular linked list. This way, each player is given a chance to play,
as we can easily shuffle back to the first player from the last player quickly, utilizing the circular property.

2)Operation systems: utilizes this concept for running multiple applications, where all these applications are placed in the circular
linked list, and without worrying about reaching to the end of the running applications, it can easily circle back the applications at the star

3)Computing Resources: Circular Linked Lists is used to manage the computing resources of the computer.

4)Fionacci Heap: Circular Linked List is also used in the implementation of advanced data structures such as a Fibonacci Heap.

5)Implementation of Data Structure:  circular linked lists are used to implement Data structures such as Stacks and Queues.

6)Computer Networking:Circular linked list is also used in computer networking for token scheduling.

7)Audio/Video Streaming: Circular linked list is also used in audio and video streaming,for ex. when one complete audio
list finishes playing in music player then it again starts playing from start.
*/
