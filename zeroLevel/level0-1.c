#include <stdio.h>


int main(){
    int port = 80;
    // check if the port is a well-known port
    if(port < 1024){
        // well-known ports are those below 1024
        printf("%d is a well-known port\n", port);
    }
    return 0;
}