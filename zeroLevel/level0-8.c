#include <stdio.h>
#include <string.h>

int main(){
    char kata[100];

    printf("masukan input password: ");
    scanf("%99s", kata);

    if(strlen(kata)< 8){
        printf("Warning Input minimal 8 character");
    }else{
        printf("success");
    }
}