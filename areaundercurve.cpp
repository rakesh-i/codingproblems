#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
using namespace std;

float area(int a, int b, float interval){
    float  sum = 0;
    float y, yprev=0;
    for(float i=a; i<b; i+=interval){
        y = i*i+1;
        if(yprev==0){
            yprev = y;
            continue;
        }
        sum = sum+.5*(y+yprev)*interval;
        yprev = y;
        }
    return(sum);
} 

int main()
{
    float a  = area(0, 3, .1);
    cout<<a;
}
