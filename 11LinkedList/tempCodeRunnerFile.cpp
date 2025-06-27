// void insertAtHead(Node* &head ,Node* &tail, int data){

//     //CHECK IF LL IS EMPTY
//         if(head == NULL){
//             Node* newNode = new Node(data);
//             head = newNode;
//             tail = newNode;
//             return;
//         }

//     //STEP 1 -- CREATE A newNode 

//     Node* newNode = new Node(data);

//     //STEP2 - JOH NEWNODE KA NEXT H USE HEAD SE CONNECT KRDOO
//     newNode -> next = head;


//     //STEP 3 H K JOH NEWNODE HAI USE HEAD BNA DOO
//     head  = newNode;
// }