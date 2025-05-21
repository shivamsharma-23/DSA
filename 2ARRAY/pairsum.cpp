
#include<iostream>
#include<vector>

using namespace std;

// int main(){

//     vector <int> arr{20,30,40,50,60};
    

//     //1 loop trverse krne k liye 

//     for(int i =0 ; i<arr.size();i++){
//         int element = arr[i];

//         // 2 loop pair banane k liyee
//         for(int j= i+1; j<arr.size();j++){
//             // cout<<element<<","<<arr[j]<<endl;
            
//             if(element + arr[j] == 90){
//                 // cout<<"pair found: "<<endl;
//                 cout<<"pair found: "<<element<<";"<<arr[j]<<endl;
//             }
    
//         }
//     }


// }




// ==============TRIPLET

int main(){
    vector <int> arr{10,20,30,40,50,60,70};


    //loop 1 for traversing 1 st elment of triplet

    for(int i =0;i<arr.size();i++)
    {
        int ele1 = arr[i];

        // loop 2 for 2nd elment of triplet 
        for(int j = i+1;j<arr.size();j++)
        {
            int ele2 = arr[j];

            //3 loop for 3 elment of triplet
            for(int k = j+1;k<arr.size();k++)
            {
                // cout<<ele1<<","<<ele2<<","<<arr[k]<<endl;
            
        

                if(ele1 + ele2 + arr[k] == 130)
                {
                    cout<<ele1<<","<<ele2<<","<<arr[k]<<endl;

            
                } 
            }
        }
    }
}