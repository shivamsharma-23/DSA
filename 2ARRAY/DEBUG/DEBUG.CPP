// This program declares an integer array of size 5 and initializes it with values 1, 2, 3, 4, and 5. Then, it attempts to print the elements of the array using a loop. However, there's an error in the loop that you need to debug. Can you find it and fix it?

// #include <iostream>
// using namespace std;

// int main() {
//    int arr[5] = {1, 2, 3, 4, 5};
//    for(int i = 0; i <= 5; i++) {
//       cout << arr[i] << " ";
//    }  
//    return 0;
// }







// ?????????????????????????????????????????????????????????????
#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int>& nums) {
    int candidate, count = 0;
    for (int i = 0; i < nums.size(); i++){
    
        if (nums[i] == candidate) {
            count++;
        } 

          if(count>nums.size()/2){
            return candidate;
        }
        else {
            return -1;
        }  
        
      
    }

    return count;
}

int main() {
    vector<int> nums = {1, 2, 3, 2, 2, 4, 2};
    cout << "The majority element is: " << majorityElement(nums) << endl;
    return 0;
}




