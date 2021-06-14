#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int num = 153;
    int a = num%10;
    int b = num/10%10;
    int c = num/100%10;
    int nar = pow(a,3)+pow(b,3)+pow(c,3);
    cout<<nar <<endl;
    system("pause");
    return 0;
}