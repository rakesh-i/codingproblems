#include<iostream>
#include<math.h>
#include<ctype.h>
using namespace std;

int main()
{
    float y, radian;
    int x;
    cout<<"               y--->"<<endl;
    for(int j=0; j<=90; j++){
            cout<<"-";
        }
    cout<<">"<<endl;
    for(int i=0; i<=180; i+=15){
        radian = 3.141592*i/180;
        y = round(sin(radian)*50);
        cout<<"|";
        for(int k=0; k<y; k++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    cout<<endl;
}
