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

void pop_front(vector<int> &q){
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

void pop_back(vector<int> &q){
    int n = q.size();
    if(n==0){
        cout<<"empty"<<endl;
        return;
    }
    else{
        q.pop_back();
    }
}

void push_back(vector<int> &q, int x){
    int i = q.size();
    q.push_back(x);
}

void push_front(vector<int> &q, int x){
    int n = q.size();
    vector<int> qq = q;
    q.clear();
    q.push_back(x);
    for(int i=0; i<n; i++){
        q.push_back(qq[i]);
    }
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
    push_back(q, 1);
    push_back(q, 2);
    push_back(q, 3);
    push_back(q, 4);
    push_back(q, 5);
    push_back(q, 6);
    push_front(q, 0);
    pop_back(q);
    pop_front(q);
    print(q);

}
