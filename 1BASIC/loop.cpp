
#include<iostream>
using namespace std;

int main(){
    cout<<"enter value for adn";
    int n;
    cin>>n;

    int sum = 0;

    for(int i = 0; i<=n ;i++){
        sum = sum + i;
    }

    cout<<sum;
}