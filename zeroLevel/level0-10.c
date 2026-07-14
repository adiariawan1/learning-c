#include <stdio.h>

int main(){
    int role = 1;
    if(role == 1){
        printf("Akses Admin\n");
    }else if(role == 0){
        printf("Akses Guest\n");
    }else{
        printf("input role dengan benar\n");
    }
}