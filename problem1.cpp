#include<iostream>
#include<vector>
using namespace std;

// Function to sort the array
void sortArray(vector<int> &v){
    int zero_count = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[i] == 0){
            zero_count++;
        }
    }

    for(int i = 0; i < v.size(); i++){
        if(i<zero_count){
            v[i] = 0;
        }else{
            v[i] = 1;
        }
    }
}

int main(){
    // Sort an array consisting of only 0s and 1s
    
    // initializing vector size
    int n;
    cin>>n;

    vector<int> v;

    for(int i = 0; i < n; i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }

    sortArray(v);

    for(int i = 0; i < n; i++){
        cout<<v[i];
    }

    cout<<endl;
    return 0;
}