#include<iostream>
using namespace std;

// Function to check if the partition exists or not
void checkPartition(int arr[], int size){

    int total_sum = 0;
    for(int i = 0; i < size; i++){
        total_sum += arr[i];
    }

    for(int i = 1; i < size; i++){

        int prefixSum = 0;

        for(int j = 0; j <= i; j++){
            prefixSum+=arr[j];
        }

        int suffixSum = total_sum - prefixSum;

        if(prefixSum == total_sum-prefixSum){
            cout<<"Partition exists"<<endl;
            break;
        }
    }
}

int main(){
    
    // Check if we can partition the array into two subarrays with equal sum. More formally, check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array.
    
    int n; cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i]; 
    }

    int size = sizeof(arr)/sizeof(arr[0]);

    checkPartition(arr, size);
    
    return 0;
}