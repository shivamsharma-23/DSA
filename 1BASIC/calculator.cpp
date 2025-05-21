
#include<iostream>
using namespace std;

int main(){
    // cout<<"use only + - * /";
    char op;    
    double a,b;
    cin >> a>>b>>op;

    switch(op){

        case '+':cout<<a+b;break;
        case '-':cout<<a-b;break;
        case '*':cout<<a*b;break;
        case '/':                       
            if(b != 0){
                cout<<a/b;

            }
            else{
                cout<<"divison by zeroo";
            }
    
        default:cout<<"Invalid operator";
    }
}