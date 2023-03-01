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

void print(queue<int> &q1){
    queue<int> q2 = q1;
    for(int i=0; i<q1.size(); i++){
        cout<<q2.front()<<" ";
        q2.pop();
    }
    cout<<endl;
}

void pop(queue<int> &q1){
    if(q1.size()==0){
        cout<<"empty"<<endl;
        return;
    }
    q1.pop();
}

void top(queue<int> &q1){
    if(q1.size()==0){
        cout<<"empty"<<endl;
        return;
    }
    cout<<q1.front()<<endl;
}

void push(int x, queue<int> &q1, queue<int> &q2){
    q1.swap(q2);
    q1.push(x);
    int n = q2.size();
    for(int i=0; i<n; i++){
        q1.push(q2.front());
        q2.pop();
    }
}

int main()
{
    queue<int> q1, q2;
    push(1, q1, q2);
    push(2, q1, q2);
    push(3, q1, q2);
    push(4, q1, q2);
    push(5, q1, q2);
    push(6, q1, q2);
    push(7, q1, q2);
    push(8, q1, q2);
    pop(q1);
    pop(q1);
    pop(q1);
    pop(q1);
    pop(q1);
    pop(q1);
    pop(q1);
    pop(q1);
    pop(q1);
    top(q1);
    print(q1);
}
