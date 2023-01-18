#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
using namespace std;

int main()
{
    char a[10][100];
    int i=0, count =0;
    char b[] = "hi";
    while(i<10){
        scanf("%s", a[i]);
        i++;
    }
    for(int i=0; i<10; i++){
        if(strcmp(a[i], b)==0){
            count++;
        }
    }
    cout<<count;
}
