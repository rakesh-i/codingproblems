#include<iostream>
#include<math.h>
#include<ctype.h>
using namespace std;

int main()
{
    int x, reminder, y=0;
    cin>>x;
    while(x!=0){
        reminder = x%10;
        y = y*10+reminder;
        x = x/10; 
    }
    cout<<y;
}
