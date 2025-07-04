#include<iostream>
#include<queue>
using namespace std;


int main(){
    //creation

    queue<int> q;


    //insertion

    q.push(5);
    q.push(15);
     q.push(115);
      q.push(155);
       q.push(1551);


       // empty or not
       if(q.empty()){
        cout<<" Q is empty"<<endl;
       }

       else{

        cout<<"Q is not empty"<<endl;
       }

    //size 
    cout<<"Size of queue is: "<<q.size()<<endl;

   //removal
    q.pop();

    cout<<"Size of queue is: "<<q.size() <<endl;


    //front element
    cout<<"front element of queuw: "<<q.front()<<endl;









}