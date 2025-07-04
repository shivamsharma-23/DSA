// #include<iostream>
// using namespace std;


// class Stack{
//     public:
//     int*arr;
//     int top;
//     int size; // array k size ko dhikata h bass


//     Stack(int size){
//         arr = new int[size]; // is pointer ko memeory allocate krvaa diii
//         this -> size = size;
//         top = -1; // empty stack hua tohh 

//     }


//     //functions

//     void push(int data)
//     {
//         if(size - top >= 1){
//             //space available 
//             //insert
//             top++;
//             arr[top] = data;

//         }

//         else{

//             //space not available 
//             cout<<"Stack Overflow"<<endl;

//         }
//     }

    
//     void pop()
//     {
//             if(top == -1){
//                 //stack s empty

//                 cout<<"stack underflow"<<endl;

//             }

//             else{

//                 // stackis not empty
//                 top--;
//             }


//     }



//     int getTop()
//     {

//             if (top == -1 ){
//                 cout<<"no elemnt in stack "<<endl;

//             }

//             else{

//                 return arr[top];
//             }
//         }

//         int getSize(){
//             return top+1;
         


//     }


//     bool isEmpty()
//     {

//         if(top == -1){
//             return true;
//         }

//         else{

//             return false;
//         }
//     }
// };


// int main(){
//     //creation 

//     Stack s(10);

//     //insert

//     s.push(10);
//      s.push(20);
//       s.push(30);
//       s.push(40);
//        s.push(50);


//        //printing 

//        while(!s.isEmpty()){
//         cout<< s.getTop() << " ";
//         s.pop();
//        }

//        //size
//        cout<<" size :"<<s.getSize() <<endl;

// }




// --------------------------------------

// #include<iostream>
// using namespace std;


// class Stack{


//     //DATA MEMBERS 

//     public:
//     int * arr;
//     int size;
//     int data;
//     int top1;
//     int top2;


   

//     //CONSTRUCTOR
//     Stack(int size){
//         arr = new int[size];
//         this -> size = size;
//         top1 = -1;
//         top2 = size;

//     }


//     // MEMBER FUNCTIONS

//     void push1(int data){

//         //stack full
//         if(top2 - top1 == 1)
//         {
//             cout<<"stack 1 overflow"<<endl;

//         }
//         //stack m jhgay h 
//         else
//         {
//             top1++;
//             arr[top1] = data;
//         }


//     }

//     void pop1(){
//         //stack empty toh nahi

//         if(top1 == -1){
//             cout<<"stack 1 underflow "<<endl;
//         }

//         else{
//             arr[top1] = 0; 
//             top1--;
//         }


//     }


//     void push2(int data){
//          //stack full
//         if(top2 - top1 == 1){
//             cout<<"stack 2 overflow"<<endl;

//         }
//         //stack m jhgay h 

//         else{

//             top2--;
//             arr[top2] = data;
//         }


//     }


//     void pop2(){
//          //stack empty toh nahi

//         if(top2 == size){
//             cout<<"stack 2 underflow "<<endl;
//         }

//         else{
//             arr[top2] = 0; 
//             top2++;
//         }



//     }

//     void print(){

//           cout<<"top1: "<<top1<<endl;
//           cout<<"top2: "<<top2<<endl;
//         for(int i = 0; i < size; i++)
//         {
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }

// };


// int main(){

//     Stack s(10);

//     s.push1(10);
//      s.push1(20);
//       s.push1(30);
//        s.push1(40);
//         s.push1(50);


//      s.push2(100);
//      s.push2(200);
//       s.push2(300);
//        s.push2(400);
//         s.push2(500);
//         //  s.push2(700);
//          s.print();

//         cout<<endl;
//         cout<<"after removing: "<<endl;

//         s.pop1();
//         s.pop1();
//           s.print();

// }


// =============================================

// #include<iostream>
// #include<stack>
// using namespace std;


// void solve(stack<int>&s , int target){
//     //base case

//     if(s.empty()){
//         s.push(target);
//         return;
//     }

//     // step 2

//     int topElement = s.top();
//     s.pop();

//     //rec call
//     solve(s,target);

//     //BT --- backtracking
//     s.push(topElement);

// }


// void insertAtBottom(stack<int> &s){
//     if(s.empty()){
//         cout<<"stack is empty, cant insert at bottom"<<endl;
//         return;
//     }

//     int target = s.top();
//     s.pop();
//     solve(s,target);
// }


// int main(){

//     stack<int> s;
//     s.push(10);
//     s.push(30);
//     s.push(40);
//     s.push(50);


//     insertAtBottom(s);

//     while(!s.empty()){
//         cout<<s.top() <<" ";
//         s.pop();

//     }
//     return 0;
// }






// =======================================
#include<iostream>
#include<stack>
using namespace std;

void reverseStack(stack<int> &s){




}





int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);


    reverseStack(s);

    return 0;

}