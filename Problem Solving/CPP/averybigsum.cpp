//A Very Big Sum

#include<iostream>
#include<vector>
using namespace std;

long averybigsum(vector <int> arr){
    long sum = 0;
    for(int i=0; i<arr.size(); i++){
        sum = arr[i] + sum;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    long result = averybigsum(ar);
    cout<<result;
    return 0;
}