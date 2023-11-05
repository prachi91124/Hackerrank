//Nikita And The Game

/*Split Array: Nikita And The Game*/
#include <iostream>
#include <vector>
using namespace std;

int split_arr(vector <int>& arr,int start/*starting index of vector*/, int end/*end inde of vector*/ ){
    //base case
    if(start>=end){
        return  0;
    }
    //recursive case
    for(int i=start; i<=end;i++){
        int left=0;
        for(int j=start; j<=i; j++){
            left+=arr[j];
        }
        int right=0;
        for(int j=i+1; j<=end; j++){
            right+=arr[j];
        }
        if(left==right){
            return 1 + max(split_arr(arr,start,i),split_arr(arr,i+1,end));
        }
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int result=split_arr(arr,0,n-1);
        cout<<result<<endl;
    }
    return 0;
}
