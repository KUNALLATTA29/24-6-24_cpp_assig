#include<bits/stdc++.h>

using namespace std;

int main(){
    
    vector<int> arr = {1,2,3,4,5,6};
    vector<int> result;
    result.push_back(arr[0]);
    for(int i=1;i<arr.size(); i++){
        result.push_back(result[i-1]+arr[i]);
    }
    
    for(auto it:result){
        cout<<it<<" ";
    }
    
    return 0;
}