#include <iostream>
using namespace std;

void l()
{
    int b,c;
    cout<<"program oleh muhamad shifa"<<endl;
    cout<<"masukkan bilangan yang akan difaktorialkan: ";
    cin>>b;
    c=b;
    cout<<"bilangan ="<<b<<endl;
    cout<<b<<"! = ";
    for(int i=1;i<=b;i--){
        cout<<i;
        if(i==b){
            cout<<" =";
        }else{
            cout<<"*";
        }
    }
    //ngitung start
    for(int i=1;b>i;){
        b=b-1;
        c=c*b;
    }
    //ngitung end
    //nampilin start
    cout<<c;
    

}