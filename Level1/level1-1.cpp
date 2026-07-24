#include <iostream>

using std :: cout;


int output =0;

int main(){
    int data[10] ={0,1,0,0,1,1,0,1,0,0};

    for(int n=0; n<10; n++){
        if(data[n] == 1){
            output += 1;
        }
    }
    
    cout<<"jumlah percobaan gagal :"<<output<<"\n";


    return 0;

}