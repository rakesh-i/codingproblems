//Addition of matrix using pointers
#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
using namespace std;

void add(int a[][3], int b[][3], int c[][3]){
    for(int i=0;i<3;i++){
        for(int j=0; j<3; j++){
            c[i][j] = *(*(a+i)+j) + *(*(b+i)+j);
        }
    }
}

void print(int c[][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<*(*(c+i)+j)<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int c[3][3];
    int a[][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int b[][3] = {
        {1,1,1},
        {1,1,1},
        {1,1,1}
    };

    add(a, b, c);
    print(c);
}
