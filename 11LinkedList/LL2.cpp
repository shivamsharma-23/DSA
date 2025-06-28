#include<iostream>
using namespace std;

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

    cout<< endl;
}


int findLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
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



void insertAtPosition(int data , int position , Node* &head,Node* &tail){

    //handle empty linkedlist
        if(head == NULL){
            Node* newNode = new Node(data);
            head = newNode;
            tail = newNode;
            return;
        }

    //handle 1st and last occurence 
        if(position == 0){
            insertAtHead(head,tail,data);
            return;
        }
        

        int len = findLength(head);
        if(position >= len){
            insertAtTail(head,tail ,data);
            return;
        } 
        
        //step1 :  find prev and current pointer 
        int i = 1;
        Node* prev = head;

        while(i< position){
            prev = prev -> next;
            i++;
                        }

        Node* curr = prev -> next; 
        


        //STEP2 --- CREATE A NEW NODE
        Node* newNode = new Node(data);


        //STEP3 ---- New NODE KA POINTER CURREENT SE LINK
        newNode->next = curr;


        //STEP4 --- PREV NODE A POINTER NEWNODE SE CONNECT KRDO
        prev->next = newNode;
}



void deleteNode(int position ,Node* &head,Node* &tail){
    if(head == NULL){
        cout << "Cannot delete , LL is empty";
        return ;
    }


    //deleting 1st node
    if (position == 1){
        Node* temp = head;
        head = head -> next;
        temp->next = NULL;
        delete temp;
        return;
    }



    //deleting last node
    int len = findLength(head);
    if(position == len){
       
       //step 1 //find previous 
        int i = 1;
        Node* prev = head;
        while(i<position -1){
            prev = prev->next;
            i++;
        }

      //  step 2
        prev->next  = NULL;

        //step3 
        Node* temp = tail;


        //step4 
        tail = prev;


        //step 5
        delete temp;

        return;
    }




    //deleting from middle 
    //step 1 : find prev and curr 
    int i  = 1;
    Node* prev =  head;
    while(i < position){
        prev = prev -> next;
        i++;
    }

    Node* curr = prev  -> next;

    // step 2 -

    prev-> next =  curr;

    //step 3-
    curr -> next = NULL;

    //step 4
    delete curr;

}


int main(){
    Node* head = NULL;
    Node* tail = NULL; 


    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);


    cout<<"printing the linkedlist: ";
    print(head);



    insertAtPosition(222,2,head,tail);
    cout<<"printing linkrd ist after positon: ";
    print(head);


    deleteNode(1,head,tail);
    cout << "After deleting position 1: ";
    print(head);



    return 0;
    
}