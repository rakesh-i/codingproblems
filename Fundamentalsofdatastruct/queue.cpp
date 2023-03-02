#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
#include<stack>
#include<queue>
using namespace std;

void print(vector<int> &q);

void pop(vector<int> &q){
    int n = q.size();
    if(n!=0){
        vector<int> qq = q;
        q.clear();
        for(int i=1; i<n; i++){
            q.push_back(qq[i]);
        }
    }
    else{
        cout<<"empty"<<endl;
        return;
    }
    
}

void push(vector<int> &q, int x){
    int i = q.size();
    q.push_back(x);
}

void print(vector<int> &q){
    if(q.size()!=0){
        for(int i=0; i<q.size(); i++){
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }
    else{
        return;
    }
}

int main()
{
    vector<int> q;
    push(q, 1);
    push(q, 2);
    push(q, 3);
    push(q, 4);
    push(q, 5);
    push(q, 6);
    print(q);

}
