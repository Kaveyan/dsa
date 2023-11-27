//print all subsequences
#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
//print all subsequences
/*void f(int ind,int arr[],vector<int>&ds,int n){
    if(ind==n){
        for(auto it :ds){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[ind]);
    f(ind+1,arr,ds,n);
    ds.pop_back();
    f(ind+1,arr,ds,n);
    
    
   return;
    
}*/
//print the subsequence ,that sum equal to target
/*void f2(int ind, int arr[], vector<int> ds, int target, int sum, int n) {
    if (ind == n) {
        if (target == sum) {
            for (auto it : ds) {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }
    ds.push_back(arr[ind]);
    sum += arr[ind];
    f2(ind + 1, arr, ds, target, sum, n);

    // Correct the update of sum here
    sum -= arr[ind];
    ds.pop_back();
    f2(ind + 1, arr, ds, target, sum, n);
}*/
//print the count of the subsequence equal to target
/*int f3(int ind, int arr[], vector<int> ds, int target, int sum, int n) {

    if (ind == n) {
        if (target == sum) {
            
         return 1;
        }
        return 0;
    }
    ds.push_back(arr[ind]);
    sum += arr[ind];
    
   int l= f3(ind + 1, arr, ds, target, sum, n);

    // Correct the update of sum here
    sum -= arr[ind];
    ds.pop_back();
    int r=f3(ind + 1, arr, ds, target, sum, n);
    return l+r;
}*/
// combination sum 11  [1,1,1,2,2] target=4, [1,1,2][2,2]
 /*void f3(int ind, int target, int arr[], vector<vector<int>>& ans, vector<int>& ds) {
    if (target == 0) {
        ans.push_back(ds);
        return;
    }

    for (int i = ind; i < 4; i++) {
        // Skip duplicates
        if (i > ind && arr[i] == arr[i - 1]) {
            continue;
        }

        // Skip if the current element is greater than the remaining target
        if (arr[i] > target) {
            break;
        }

        ds.push_back(arr[i]);
        f3(i + 1, target - arr[i], arr, ans, ds);
        ds.pop_back();
    }
}*/


//combination 1 //[2,3,4,6,7] target =7,[2,2,3][3,4][7]
void f4(int ind, int target, int arr[], vector<vector<int>>& ans, vector<int>& ds,int n) {
    if (ind == n) {
        if (target == 0) {
            ans.push_back(ds);
        }
        return;
    }

    if (arr[ind] <= target) {
        ds.push_back(arr[ind]);
        f4(ind, target - arr[ind], arr, ans, ds,n);
        ds.pop_back();
    }

    f4(ind + 1, target, arr, ans, ds,n);
}


int main(){
    int arr[4]={1,3,4,2};
    int n=4;
    vector<int>ds;
    int target=2;
    int sum=0;
    //f(0,arr,ds,n);
    //f2(0,arr,ds,target,sum,n);
    //int result =f3(0,arr,ds,target,sum,n);
    //cout<<result;
   // sort(arr,arr+n);
    vector<vector<int>>ans;
    //f3(0,target,arr,ans,ds);
    f4(0,target,arr,ans,ds,n);
      for (const auto& v : ans) {
        cout << "[ ";
        for (int num : v) {
            cout << num << " ";
        }
        cout << "]" << endl;

      }
  return 0;
}





//string
/*(void generateSubsequences(string str, int index, string current, vector<string>& subsequences) {
    if (index == str.length()) {
        subsequences.push_back(current);
        return;
    }

    // Include the current character
    generateSubsequences(str, index + 1, current + str[index], subsequences);

    // Exclude the current character
    generateSubsequences(str, index + 1, current, subsequences);
}

int main() {
    string input = "kaveyan";
    vector<string> subsequences;

    generateSubsequences(input, 0, "", subsequences);

    // Displaying the subsequences
    for (const auto& subsequence : subsequences) {
        cout << subsequence << " ";
    }

    return 0;
}
*/