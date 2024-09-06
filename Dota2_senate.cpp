#include<bits/stdc++.h>
using namespace std;
void display(queue<int>& q){
    while(q.size()>0){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
 int main(){
    string senate = "RRDRDRDDRDR";
    int n = senate.length();
     queue<int> q;
     queue<int> D;
     queue<int> R;
     for(int i=0;i<n;i++){
        q.push(i);
        if(senate[i]=='R') R.push(i);
        else D.push(i);
     }
    //  cout<<"Q is display : "<<endl;
    //  display(q);
    //    cout<<"R is display : "<<endl;
    //  display(R);
    //    cout<<"D is display : "<<endl;
    //  display(D);
     for(int i=0;i<n;i++){
        if(senate[q.front()]=='R'){
            senate[R.front()]='X';
            R.pop();
            q.push(q.front());
            q.pop();
        }
       else if(senate[q.front()]=='D'){
            senate[D.front()] = 'X';
            D.pop();
            q.push(q.front());
            q.pop();
        }
        else{     //senate[q.front()]=='X
                q.pop();
        }
     }
    return 0;
 }