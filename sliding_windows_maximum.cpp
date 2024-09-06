#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {7,2,4};
    int k = 2;
    deque<int> dq;
    vector<int> ans;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        while(dq.size()>0 && arr[i]>arr[dq.back()]) dq.pop_back();
        dq.push_back(i);
        int j = i-k+1;
        while(dq.front()<j) dq.pop_front();
       if(i>=k-1) ans.push_back(arr[dq.front()]);
    }
    //print the output
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}