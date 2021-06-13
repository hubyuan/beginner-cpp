#include <iostream>
#include <math.h>
using namespace std;

#define day 7
/*
整形 long 的大小
long window 4字节  linux32 4字节 64 8字节

*/
int main(){

  long long mmax = pow(2,8*4-1);
  long max = mmax;

  cout<<"long long "<<mmax<<endl;
  cout<<"long "<<max<<endl;
  system("pause");
  return 0;
}

