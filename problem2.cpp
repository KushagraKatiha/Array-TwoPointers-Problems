#include<iostream>
#include<vector>
using namespace std;

// Function to arrange the numbers
void arrangeArray(vector<int> &v){
    int first_ptr = 0;
    int second_ptr = v.size()-1;

    while(first_ptr < second_ptr){
        cout<<first_ptr<<"and"<<second_ptr<<endl;
        if(v[first_ptr]%2 != 0 && v[second_ptr]%2 == 0){
            int temp = v[first_ptr];
            v[first_ptr] = v[second_ptr];
            v[second_ptr] = temp;
            first_ptr++;
            second_ptr--;
            cout<<"opt3"<<endl;
        }
        
        if(v[first_ptr]%2 == 0){
            first_ptr++;
            cout<<"opt1"<<endl;
        }

        if(v[second_ptr]%2 != 0){
            second_ptr--;
            cout<<"opt2"<<endl;
        }

        cout<<"Inside the loop"<<endl;
    }
}

int main(){
    // Given an array of integers 'a', move all the even integers at the beginning of the array followed by all the odd integers. The relative order of odd or even integers does not matter. Return any array that satisfies the condition.

    int n; cin>>n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int ele; 
        cin>>ele; 
        v.push_back(ele);
    }

    arrangeArray(v);

    for(int i = 0; i < v.size(); i++){
        cout<<v[i];
    }
    
    cout<<endl;
    return 0;
}