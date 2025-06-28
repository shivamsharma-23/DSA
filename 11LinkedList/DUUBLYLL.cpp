//doubly linked list\\\



#include<iostream>
using namespace std;


// // ==============================================
// class Node{
// //access modifier 
// public:

// //data members 
// int data;
// Node* prev;
// Node* next;


// Node(){
//     this->data = 0;
//     this->prev = NULL;
//     this->next = NULL;
// }

// Node(int data){
//     this-> data= data;
//     this->prev = NULL;
//     this->next = NULL;

// }

// };
// void print(Node* &head){
//     Node* temp = head;

//     while(temp != NULL){
//         cout<< temp -> data <<" ";
//         temp = temp -> next;
//     }
// }


// int getLength(Node* head){
//     int len = 0;
//     Node* temp = head;

//     while(temp != NULL){
//         temp = temp -> next;
//         len++;


//     }

//     return len;
// }



// int main(){

// Node * first = new Node(10);
// Node * second = new Node(20);
// Node * third = new Node(30);



// //connect krva doo
// first -> next =  second;
// second -> prev = first;
// second ->next = third;
// third -> prev = second;


// //print function ko call
// print(first);

// return 0;
// }




//INSERTIONNN  AND DELETION
// ==============================================

class Node{
//access modifier 
public:

//data members 
int data;
Node* prev;
Node* next;


Node(){
 cout<<"inside default constructor"<<endl;
    this->data = 0;
    this->prev = NULL;
    this->next = NULL;
}

Node(int data){
     cout<<"inside paremeter constructor"<<endl;
    this-> data= data;
    this->prev = NULL;
    this->next = NULL;

}

~Node(){
    cout<<"inside destructor"<<endl;
    cout<<"node with value " <<this->data<<" deleted "<<endl;
}

};

void print(Node* &head){
    cout<<"inside print fxn"<<endl;
    Node* temp = head;

    while(temp != NULL){
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
}


int getLength(Node* head){
    cout<<"inside getlength fxn "<<endl;
    int len = 0;
    Node* temp = head;

    while(temp != NULL){
        temp = temp -> next;
        len++;

    }

    return len;
}

void insertHead(Node* &head, Node* &tail , int data){

    cout<<"inside Head "<<endl;
    //LL IS EMPTY
    if( head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;

    }

    // step 1 create a new node

    Node* newNode = new Node(data);


    //step 2 node k next ko head se
    newNode->next = head;


    //step3 head k prev ko node
    head->prev = newNode;


    //step4 head ko update krke newNode
    head = newNode;

}


void insertTail(Node* &head, Node* &tail , int data){
    cout<<"inside  Tail"<<endl;
    //LL IS EMPTY
    if(tail == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;

    }

    // step 1 create a new node

    Node* newNode = new Node(data);


    //step 2 newnode k prev ko tail se
    newNode->prev = tail;


    //step3 tail k next ko node
    tail->next = newNode;


    //step4 tail ko update krke newNode
    tail = newNode;

}


void insertPosition(int position,Node* &head, Node* &tail,int data){

    cout<<"inside Position"<<endl;
    //if LL IS EMPTY
      //LL IS EMPTY
    if( head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;

    }


    if(position == 1){
        insertHead(head , tail, data);
        return;
    }

    int len = getLength(head);
    if(position >= len){
        insertTail(head ,tail,data);
        return;

    }


    // beech m kuch huaa tohh 

    // s1 -- find prevNode and currNode
    int i = 1;
    Node* prevNode = head;
    while(i < position -1){
        prevNode = prevNode ->next;
        i++;
    } 
    Node* curr = prevNode->next;



    //step 2 create new 
    Node* newNode = new Node(data);


    //s3 --
    prevNode -> next = newNode;


    //s4
    newNode -> prev = prevNode;

    //s5
    curr -> prev = newNode;


    //s6
    newNode -> next = curr;
}


void deleteFromPosition(int position ,Node* &head, Node* &tail){
    cout<<"inside delete"<<endl;
    //LL IS EMPTY
    if(head == NULL){
        cout<<"LL IS EMPTY";
        return;
    }


    int len = getLength(head);
    if(position > len){
        cout<<"please enter valid argument";
    }


    // aagar single hi node haii tohh
    if(head->next == NULL){
        Node* temp = head;
        head =NULL;
        tail =NULL;
        delete temp;
        return;
    }

    if(position == 1){
    //deleting 1st node

        //s1
        Node* temp = head;

        //s2
        head = head ->next;

        //s3
        head->prev = NULL;


        //s4
        temp->next ==NULL;

        //s5
        delete temp;

        return;

    }

    if(position == len){

        //deleting last node 

        //s1
        Node* temp = tail;

        //s2
        tail = tail -> prev;


        //s3
        tail -> next = NULL;


        //s4 
        temp -> prev = NULL;

        //s5

        delete temp;
    }



    ///deleting in middleee positions 

    //step 1 : find left , current , right

    Node* left = head;
    int i = 1;

    while(i < position -1){
        left = left->next;
        i++;
    }

    Node* curr = left ->next;
    Node* right = curr -> next;


    //step 2
    left -> next = right;


    // s3
    right -> prev  =left;


    //s4
    curr->prev = NULL;

    //s5
    curr -> next = NULL;


    //S6
    delete curr;

}


int main(){

Node * first = new Node(10);
Node * second = new Node(20);
Node * third = new Node(30);
Node* head = first;
Node* tail = third;


//connect krva doo
first -> next =  second;
second -> prev = first;
second ->next = third;
third -> prev = second;


//print function ko call
cout<<"printing doubly linkedlist: ";
print(first);
cout<<endl;



insertHead(head, tail,55);
cout<<"inseration from head : ";
print(head);
cout<<endl;



insertTail(head,tail ,550);
cout<<"insertion from tail: ";
print(head);
cout<<endl;


insertPosition(6,head,tail,888);
cout<<"insertion at position: ";
print(head);
cout<<endl;



deleteFromPosition(3,head,tail);
cout<<"after deletion: ";
print(head);
cout<<endl;

return 0;
}




