// array k elemnts ko pushback fxn use krke enter krva dena hai array maii

#include<iostream>
#include<vector>
using namespace std;


// int main(){
//     int arr[] ={1,2,3,4,5};
//     int brr[] ={3,4,5,6,7,8};
//     int siza = 5;
//     int sizb = 7;
//     // cout<<"size of vector :";
//     // int n = 1;
//     // cin>>n;
//     vector <int> ans;

//     for(int i=0;i<siza;i++){
//         ans.push_back(arr[i]);
//     }

//      for(int i=0;i<sizb;i++){
//         ans.push_back(brr[i]);
//     }

//     cout<<"printing ans: ";
//     for(int i =0; i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
// }



// ==================================
//intersection

int main()
{
    vector <int>arr{1,2,3,4,56,7};
    vector <int>brr{8,8,9,9,3,4};
    vector <int>ans;

    //outerloop arr k elemnts ko seect krke traverse kre k liye 
    for(int i =0;i<arr.size();i++){
        int elemnt = arr[i];

        // inner loop arr k elemnt s ko brr se compare krne k liye 
        for(int j =0;j<brr.size();j++)
        {
            if(elemnt == brr[j])
            {
                ans.push_back(elemnt);
            }
        }
    }

    // printing ans

    for(int i = 0 ;i<ans.size();i++ )
    {
        cout<<ans[i]<<" ";
    }

}
