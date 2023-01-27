//Read integers from a file and put even and odd number in different files.
#include<iostream>
#include<math.h>
#include<ctype.h>
#include<cstring>
#include <cfloat>
using namespace std;

int main()
{
    FILE *fp1, *fp2;
    int number;
    fp1 = fopen("DATA", "w");
    for(int i=1;i<=30; i++){
        scanf("%d", &number);
        if(number == -1)break;
        putw(number, fp1);
    }
    fclose(fp1);
    fp2 = fopen("DATA", "r");
    while((number = getw(fp2))!=EOF){
        if(number%2==0){
            fp1 = fopen("EVEN", "a");
            putw(number, fp1);
            fclose(fp1);
        }
        else{
            fp1 = fopen("ODD", "a");
            putw(number, fp1);
            fclose(fp1);
        }
    }
    fclose(fp2);
    fp1 = fopen("EVEN", "r");
    while((number = getw(fp1))!=EOF){
        cout<<number<<" ";
    }
    cout<<endl;
    fclose(fp1);
    fp1 = fopen("ODD", "r");
    while((number = getw(fp1))!=EOF){
        cout<<number<<" ";
    }
    fclose(fp1);
}
