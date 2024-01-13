#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function to sort square of the array
void squareSort(vector<int> &v){
    int left_ptr = 0;
    int right_ptr = v.size()-1;

    vector<int> ansArr;

    while(left_ptr <= right_ptr){
        if(abs(v[left_ptr])<abs(v[right_ptr])){
            ansArr.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }else{
            ansArr.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
    }

    reverse(ansArr.begin(), ansArr.end());
    for(int i = 0; i < v.size(); i++){
        cout<<ansArr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // Given an integer array 'a' sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

    int n; cin>>n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }

    squareSort(v);

    cout<<endl;
    return 0;
}