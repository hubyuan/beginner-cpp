#include<iostream>
using namespace std;

int main(){

    int score = 100;
    if (score == 99)
    {
        cout<<"it is 99"<<endl;
    }else{
        cout<<"it is not 99"<<endl;
    }


    int a = 13;
    int b = 112;
    int c = 0;
    c=a>b?a:b;
    cout<<c<<endl;

    

    switch (score)
    {
    case /* constant-expression */100:
        /* code */
         cout<<"best"<<endl;
        break;
    
    default:
           cout<<"good"<<endl;
        break;
    }
    system("pause");
    return 0;
}