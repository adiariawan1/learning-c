#include<iostream>

using std :: cout;

int main(){
    int data[10] ={22, 1200, 80, 3389, 443, 8080, 21, 25, 9999, 110};

    for(int step = 0; step < 10; step++){
        if(data[step]>1000){
            cout<<" "<<data[step]<<",";
        }
    }
    return 0;
}