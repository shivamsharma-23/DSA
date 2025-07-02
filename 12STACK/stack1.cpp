#include<iostream>
#include<stack>

using namespace std;

int main(){
    //creation
    stack <int> st;

    //insertion 
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    //to print a stack
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;

    // //remove
    // st.pop();


    // //checking elemnt at top
    // cout<<"this element is at top:"<<st.top()<<endl;


    // //size of stack
    // cout<<"size of stack is: "<< st.size()<<endl;


    // //is empty or not
    // if(st.empty()){
    //     cout<<"stack is empty"<<endl;
    // }

    // else{

    //     cout<<"stack is not empty"<<endl;
    // }

}