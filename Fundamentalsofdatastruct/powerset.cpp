#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
#include<stack>
#include<vector>
#define SWAP(x, y, t)  ((t)=(x), (x)=(y), (y)=(t))
#define NOT(x) (((x)<1)?1:0) 
using namespace std;

void subset(vector<vector<int>> &a, vector<int> &b){
    a = {{}};
    for(int i=0; i<b.size(); i++){
        int l = a.size(); // if you put it directly in the 
                          //loop, its logic error which enter a infinite loop
        for(int j=0; j<l; j++){
            vector<int>temp = a[j];
            temp.push_back(b[i]);
            a.push_back(temp);
        }
    }
}

int main()
{
    vector<vector<int>> a;
    vector<vector<int>> b;
    vector<int> c;
    c = {1, 2, 3};
    subset(a, c);
    for(int i=0; i<a.size(); i++){
        for(int j=0; j<a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
