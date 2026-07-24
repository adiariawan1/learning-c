#include<iostream>

using std :: cout;
int count = 0;
int main(){
    int data[15]={-1,-2,-3,-4,-5,-6,-7,-8,-9,-10,-11,12,-13,-14,15};
    
    for(int step = 0; step < 15; step++){
        if(data[step] > 0){
            count += 1;
        }
    }
    cout<<count;
    return 0;
}