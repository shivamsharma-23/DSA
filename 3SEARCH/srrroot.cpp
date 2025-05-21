#include<iostream>
using namespace std;


int findSqrt(int n){
    int target = n;
    int s = 0;
    int e = n ;
    int mid  = s + (e-s)/2;
    int ans  = -1;

    while(s<=e){

        if(mid*mid == target){

            return mid;
        }

        else if(mid*mid >  target){
            //left m search 

            e = mid -1;
        }


        else{

            //ans store karlo or right m search karoo

            ans = mid;

            s = mid+1;
        }

         mid  =s + (e-s)/2;
    }

    return ans;
}

int main(){

    int n;
    // int ans = -1;
    cout<<"enter number: ";

    cin>>n;

    int ans = findSqrt(n);
    cout<<"square root is : "<<ans<<endl;

    cout<<"enter precesion no:";
    int precesion;
    cin >> precesion;
    double step =0.1;
    double finalAns = ans;
    //3.1 tkk check krne k liyee hai loop

    for(int i = 0;i<precesion;i++){

        //ye wala loop haii 3.1 se leke 3.1x * 3.1x < jaha tkk target se less higa

        for(double j = finalAns;j*j<n;j = j + step){

            finalAns = j;
            
        }

        step = step /10;
    }

    cout<<"final asn "<< finalAns;



    return 0;


}