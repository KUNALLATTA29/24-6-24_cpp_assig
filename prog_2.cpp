#include<bits/stdc++.h>

using namespace std;

int main(){
    
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    vector<int> result;
    result.push_back(arr[0]);
    result.push_back(arr[1]);
    for(int i=2;i<arr.size();i++){
        result.push_back(arr[i-2]+arr[i-1] + arr[i]);
    }
    
    for(auto it:result){
        cout<<it<<" ";
    }
    
    return 0;
}