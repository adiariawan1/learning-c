#include <stdio.h>

int main(){
    // variable total for sum
    int total = 0;
    // looping for sum number from 1 to 100
    for(int step = 1; step <= 100; ++step){
        // sum number from 1 to 100
        total = total + step;
    }
    // print out total number from 1 to 100
    printf("Log %d", total);
}