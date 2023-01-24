#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
using namespace std;

struct tim{
    int sec;
    int min;
    int hour;
};

void display(struct tim a ){
    printf("%02d:%02d:%02d\n", a.hour, a.min, a.sec);
}

void in(tim **x){
    tim *temp = *x;
    //cin>>temp->hour;
    //cout<<temp->hour;
    scan:
    scanf("%d:%d:%d", &(temp->hour), &(temp->min), &(temp->sec));
    if(temp->hour>23||temp->hour<0||temp->min>59||temp->min<0||temp->sec>59||temp->sec<0){
        cout<<"invalid time\nEnter a valid time again\n";
        goto scan;
    }
}

void increment(tim **y){
    tim *t = *y;
    if(t->sec==59){
        t->sec = 0;
        if(t->min==59){
            t->min = 0;
            if(t->hour==23){
                t->hour = 0;
                t->min = 0;
                t->sec = 0;
            }
            else{
                t->hour++;
            }
        }
        else{
            t->min++;
        }
    }
    else{
        t->sec++;
    }
}

int main()
{
    tim *time = new tim();
    in(&time);
    
    while(time->hour!=23){
        display(*time);
        increment(&time);
    }
    display(*time);
}
