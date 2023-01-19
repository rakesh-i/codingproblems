#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
using namespace std;

int main()
{
    char a[100], b[] = "hi";
    int i=0,count=0;
    cin.getline(a, 100);
    char *t = a;   
    while(t = strstr(t, b )){ 
        count++;                //increment the counter
        t++;                    //it moves one index forward and the key(hi) becomes i so it is ready 
    }                           //check for the next occurance of the key.
    cout<<count;
}
