//
//  main.c
//  11
//
//  Created by 한서윤 on 11/16/25.
//

#include <stdio.h>

void swap (int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(void) {
    int a = 3;
    int b = 5;
    swap(&a,&b);
    
    printf("a:%i,b:%i\n", a, b);
    return 0;
}
