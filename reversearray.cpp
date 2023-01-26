#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
using namespace std;

void reverse(int *a, int n){
    int low = 0;
    int high = n-1;
    int temp;
    while(high>=low){
        temp = a[low];
        a[low] = a[high];
        a[high] = temp;
        high--;
        low++;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 5};
    //cout<<sizeof(a)/sizeof(int);
    reverse(a, 11);
    for(int i=0; i<11; i++){
        cout<<*(a+i)<<" ";
    }
    cout<<endl;
}
