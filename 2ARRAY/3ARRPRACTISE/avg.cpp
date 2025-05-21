#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

//AVERAGE OF A ARRAY
int findSum(vector<int>arr)
{
     int sum = 0;
    for(int i = 0; i<arr.size();i++)
    {
        sum = sum + arr[i];
    }
     return sum;
}

//MAX ELEMNT IN AN ARRAY
int maxElement(vector<int>arr){
int maxi = INT_MIN;
for(int i = 0 ; i<arr.size();i++){ 
    if(arr[i]> maxi){
        maxi = arr[i];
    } 
 }
 return maxi;
}


//2ND LARGEST ELEMNT IN AN ARRAY
int secondMax(vector<int>arr){
    int maxi = maxElement(arr);
    int secondmax = INT_MIN;
    for(int i =0;i<arr.size();i++){
        if(arr[i]<maxi && arr[i]>secondmax){
            secondmax = arr[i];

        }
    }
if(secondmax == -1){
return -1;
}
else{
    return secondmax;
}
}


int main()
{

    vector<int>arr{1,2,3,4,5,6};
    
    int sum = findSum(arr);
    int average = sum/arr.size();
    int maxi = maxElement(arr);
    int secondmax  = secondMax(arr);
    cout<<"average of array "<<average<<endl;
    cout<<"max Element: "<<maxi<<endl;
    cout<<"second max elemnt:"<<secondmax<<endl;

}