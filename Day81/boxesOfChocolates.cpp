#include<iostream>
#include<vector>
using namespace std;
bool canDistChoco(vector<int> &arr, int mid, int s){
    int n = arr.size();
    int studentsReqd = 1;
    int currSum = 0;
    for(int i=0; i<n; i++){
        if(arr[i]>mid){
            return false;
        }
        if(currSum+arr[i]>mid){
            studentsReqd++;
            currSum = arr[i];
            if(studentsReqd>s){
                return false;
            }
        }
        else{
            currSum +=arr[i];
        }
    }
    return true;
}
int distChoco(vector<int> &arr, int s){
    int n = arr.size();
    int low = arr[0], high = 0;
    for(int i=0; i<n; i++){
        high +=arr[i];
    }
    int ans = -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(canDistChoco(arr, mid, s)){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int s;
    cin>>s;
    cout<<distChoco(arr, s);
    return 0;
}
