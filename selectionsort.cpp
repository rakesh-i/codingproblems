#include<iostream>
#include<math.h>
#include<ctype.h>
using namespace std;

int main()
{
    int a[] = {5, 4, 3, 2, 1, 0, 16, -3, 8, -55, 5}, temp;
    for(int i=10; i>=0; i--){
        for(int j=0; j<i; j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(int k=0; k<10; k++){
        cout<<a[k]<<" ";
    }
    cout<<endl;
}
