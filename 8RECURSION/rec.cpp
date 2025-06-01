// ek badiproble ko solve krne k liye choti problems ko use jar paye tbb recurrsion apply hogaa


#include<iostream>
using namespace std;



int factorial(int n ){

    //step 1 base conditon rukna kab hai
    if(n == 1)
        return 1;
    
    int chotiProblem = factorial(n-1);
    int badiProblem = n * chotiProblem;

    return badiProblem;


}



void counting(int n){

    //s1 base conditon 

    if(n == 0){
        return;
    }

    //process 
    cout<< n <<" ";

    //recursive relation
    counting(n-1);

}


// int main(){

// int n ;
// cout<<"enter n: "<<endl;
// cin>>n;




// // int ans = factorial(n);
// // cout<<"ansswer: "<<ans<<endl;







// //  counting(n);
// //  cout<<endl;
// // cout<<"counting ans "<<op<<endl;






// }

// ============FIBONNACIII SERIES USING RECURSSIONN ============


int fib(int n){

    //base conditon 
    if(n==1){
    //first term 
        return 0;
    }

    if( n == 2){
    //2nd term
        return 1;
    }


    //recursive relation ---
    int ans = fib(n-1) + fib(n-2);
    return ans;

}


int main(){
    int n ;
    cout<<"enter term you wanna see: "<<endl;
    cin>>n;


    int ans  = fib(n);
    cout<<"answer: "<<ans<<endl;
}