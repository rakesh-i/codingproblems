#include<iostream>
#include<math.h>
#include<ctype.h>
using namespace std;

int main()
{
    int x, count=2, next;
    cin>>x;
    int n1=1, n2=1;
    printf("%d %d ", n1, n2);
    do
    {
        next = n1+n2;
        printf("%d ", next);
        n1= n2;
        n2 = next;
        count++;
        
    } while (count<x);
    
}
