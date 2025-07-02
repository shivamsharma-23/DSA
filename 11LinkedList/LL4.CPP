#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;


    Node(int data){
        this -> data = data;
        this ->next = NULL;

    }


};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data<<" ";
        temp = temp -> next;

    }
}



Node* getMid(Node* &head){

    // edge cases 
    // ll is empty
    if(head == NULL){
        cout<<" LL IS EMPTY"<<endl;
        return head;
    }

    // ll has one node
    if (head->next ==  NULL)
    {
        return head;
    }

    // ll have > 1 node
    Node* slow = head;
    Node* fast = head; // head -> next then 30 as answer instead of 40


    while(slow != NULL && fast != NULL){
        fast = fast -> next;

        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        
    }
    
    // abbb slow hi hamara middle hai toh 
        return slow;

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

Node* reverseKNodes(Node* &head , int k){

    if(head == NULL){
        cout<<"LL IS EMPTY"<<endl;
        return NULL;
    }


    int len = getLength(head);
    if(k > len){
        cout<<"enter a valid value for k"<<endl;
        return head;
    }


    // it means ll is >=k
    // step A: reverse first k nodes of LL

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr -> next;
    int count = 0;

    while(count < k){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }


    // step b

    if(forward != NULL){

        //we still have nodes left to reverse
        reverseKNodes(forward , k);
        head -> next = reverseKNodes(forward , k);

    }

    // step c : return head of the modifiied LL
    return prev;

}



int main(){


    Node* head = new Node(10);
     Node* second= new Node(20);
      Node* third = new Node(30);
       Node* fourth = new Node(40);
        Node* fifth = new Node(50);
        Node* sixth= new Node(60);


        head->next = second;
        second -> next = third;
        third ->next = fourth;
        fourth->next = fifth;
        fifth->next =sixth;
        sixth->next =NULL;


        print(head);
        cout<<endl;
        cout<<"middle node is :"<< getMid(head) -> data <<endl;


    head = reverseKNodes(head,3);
    print(head);


    return 0;
}