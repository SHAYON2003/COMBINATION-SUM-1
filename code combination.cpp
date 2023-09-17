#include <iostream>
#include <vector>
using namespace std;

void solve(int ind, vector<int> &arr, int target, vector<vector<int>> &ans, vector<int>&ds){
        if(ind == arr.size()){
             if(target == 0){
                   ans.push_back(ds);
             }
        
               return;
        }

    //picking up the element
     if(arr[ind]<= target){
          ds.push_back(arr[ind]);
          solve(ind, arr, target-arr[ind], ans, ds);
          ds.pop_back();
     }
       
       solve(ind+1,arr,target,ans,ds);
      
 }
  
    //public: 
    int main(){
       vector<int> arr{2,3,6,7};
       int target = 7;
       vector<vector<int>> ans;
        vector<int> ds;
        
        solve(0,arr,target,ans, ds);
        return ans;
    }
