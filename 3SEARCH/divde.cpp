#include<iostream>
using namespace std;

int solve(int dividend,int divisor){
int s  =0 ;
int e  =abs(dividend);
int ans = -1;

int mid = s + (e-s)/2;
while(s<=e){

    if(abs(mid*divisor) == abs(dividend)){
        return mid;
    }

    else if(abs(mid * divisor)> abs(dividend)){

        //mid ki vlaue zyada hai
        //go left

        e = mid -1;
    }

    else {
        // vlaue lesser than dividend 
        //woh to sahii hai naa kam hai value use store karloo last m johsabse approximate value hogii woh apne aap aajyegii
        ans = mid;
        s = mid + 1;
    }

    mid = s + (e-s)/2;

}

if((divisor <0 && dividend<0) || (divisor >0 && dividend>0)){
return ans;
}
else{

    return -ans;
}

}


int main(){
int divisor = 7 ,dividend = - 22;
int ans = solve(dividend , divisor);
cout<<"ans is "<<ans;

}