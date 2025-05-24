//REMOVING ADJECENT CHARACTER IN A STRING 

#include<iostream>
#include<vector>
#include<string>
#include<strings.h>
#include<limits.h>
#include<algorithm>
using namespace std;

int main(){
//     string s;
//     cout<<"provide string: ";
//     cin>>s;

//     string ans = "";
//     int i = 0;


//     while(i < s.length())
//     {

//         if (s.length() > 0)
//         {

//             if((ans[ans.length() -1]) == s[i]){
//                 ans.pop_back();
//             }

//             else{
//                 ans.push_back(s[i]);
//             }

//         }

//         else{

//             ans.push_back(s[i]);
//         }
//         i++;

//     }

//     cout<<" modified string "<<endl; 
//     cout<<ans;


//removing substring occurence 


    // string s,part;
    // cout<<"enter string: ";
    // cin>>s;

    // cout<<"enter part: ";
    // cin>>part;
    //     int pos = s.find(part);
    //     while(pos != string::npos){
    //         s.erase(pos,part.length());
    //         pos = s.find(part);
    //     }
    //     cout<<s;
        



    // conveerting string into integer

    vector<string>timepoints{"23:10", "12:23", "14:14", "18:56"};

    vector<int>minutes;

    //converting hours into minutes
    for(int i = 0; i<timepoints.size();i++){
        string curr = timepoints[i];
        int hours = stoi(curr.substr(0,2));

        int minute = stoi(curr.substr(3,2));

        int totalminutes = hours*60+minute;

        minutes.push_back(totalminutes);

    }


    //sort minutes 

    sort(minutes.begin(),minutes.end());



    for (int i = 0; i <minutes.size(); i++)
    {
       cout<<minutes[i]<<" "<<endl;
    }
    
    int min_diff = INT_MAX;
    for(int j = 0; j <minutes.size()-1;j++){

        int diff = minutes[j+1] - minutes[j];
        min_diff = min(min_diff , diff);

    }


     int circular_diff = (1440 + minutes[0]) - minutes.back(); //Because .back() gives you the last element in the vector without needing to write:
                                             // minutes[minutes.size() - 1]

     min_diff = min(min_diff, circular_diff);

    cout<<"minimum difference "<<min_diff;

    return 0;

    }

