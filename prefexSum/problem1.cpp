#include<iostream>
#include<vector>
using namespace std;

void getPrefixSum(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        v[i] += v[i-1];
    }
}

int main(){
    // Given an integer array "a", return the prefix sum/running sum in the same array without creating a new array.
    
    int n; cin>>n;

    vector<int> v;
    for(int i = 0; i < n; i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }

    getPrefixSum(v);

    for(int ele: v){
        cout<<ele<<" ";
    }

    cout<<endl;
    return 0;
}