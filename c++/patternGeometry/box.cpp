#include<iostream>

using std :: cin;
using std :: cout;

int main(){
    int a;
    cout<<"input your number :";
    cin>>a;

    for(int line = 0; line<a; line++){
        for(int print = 0; print<a; print++){
            cout<<"#";
        }
        cout<<"\n";
    }
}