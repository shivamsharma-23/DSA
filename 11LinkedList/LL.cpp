#include<iostream>
using namespace std;


=======================================================

// basic code 

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(){
//         this->data = 0;
//         this->next = NULL;

//     }
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }

// };


// void print(Node* head){
//     Node* temp = head;

//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp -> next;
//     }
// }

// int main(){

//     Node* first = new Node(10);
//      Node* second = new Node(20);
//       Node* third = new Node(30);
//        Node* fourth = new Node(40);

//        first->next = second;
//        second->next = third;
//        third -> next = fourth;

//        print(first);
    
// }




// INSERT AT HEAD ============================================================

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(){
//         this->data = 0;
//         this->next = NULL;

//     }
//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }

// };


// void print(Node* head){
//     Node* temp = head;

//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp -> next;
//     }
// }


// void insertAtHead(Node* &head , int data){

//     //STEP 1 -- CREATE A newNode 

//     Node* newNode = new Node(data);

//     //STEP2 - JOH NEWNODE KA NEXT H USE HEAD SE CONNECT KRDOO
//     newNode -> next = head;


//     //STEP 3 H K JOH NEWNODE HAI USE HEAD BNA DOO
//     head  = newNode;
// }

// int main(){

//     Node* head = new Node(10); 
//     insertAtHead(head,20);
//     insertAtHead(head,30);
//     insertAtHead(head,40);
//     insertAtHead(head,50);

//     //print the linkedlist 
//     cout<<"printing the linkedlist: ";
//     print(head);

//     return 0;
    
// }



// INSERT AT TAIL ========================================================

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next = NULL;

    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

};


void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}

void insertAtHead(Node* &head ,Node* &tail, int data){

    //CHECK IF LL IS EMPTY
        if(head == NULL){
            Node* newNode = new Node(data);
            head = newNode;
            tail = newNode;
            return;
        }

    //STEP 1 -- CREATE A newNode 

    Node* newNode = new Node(data);

    //STEP2 - JOH NEWNODE KA NEXT H USE HEAD SE CONNECT KRDOO
    newNode -> next = head;


    //STEP 3 H K JOH NEWNODE HAI USE HEAD BNA DOO
    head  = newNode;
}



void insertAtTail(Node* &head,Node* &tail , int data){
    
    //CHECK IF LL IS EMPTY
        if(head == NULL){
            Node* newNode = new Node(data);
            head = newNode;
            tail = newNode;
            return;
        }

    //STEP 1 -- CREATE A newNode 

    Node* newNode = new Node(data);

    //STEP2 - Tail k next ko newNode se connect krdo
    tail -> next = newNode;

    //STEP 3 H K JOH NEWNODE HAI USE HEAD BNA DOO
    tail  = newNode;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL; 
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);

    //print the linkedlist 
    cout<<"printing the linkedlist: ";
    print(head);

    return 0;
    
}