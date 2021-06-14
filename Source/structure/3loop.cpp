#include<iostream>
using namespace std;

int main(){

    int num = 0;
    while (/* condition */num < 10)
    {
        cout<<num<<endl;
        /* code */
        num++;
    }
    

    do
    {
        num++;
        /* code */
    } while (/* condition */num < 30);
    

    cout<<num<<endl;



    
    cout<<"this is 1"<<endl;

    cout<<"this is 2"<<endl;
    cout<<"this is 3"<<endl;

    goto flag;
    cout<<"this is 4"<<endl;
    cout<<"this is 5"<<endl;
    cout<<"this is 6"<<endl;
    flag:
    cout<<"this is 7"<<endl;

    cout<<"this is 8"<<endl;

    system("pause");
    return 0;
}