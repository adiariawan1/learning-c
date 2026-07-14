#include <stdio.h>

int main(){
    // this variable
    int ram = 4;
    // check condition valid or not
    if(ram<=8){
        printf("Ram %d GB tidak cukup",ram);
    }else{
        printf("Ram %d GB cukup",ram);
    }
}