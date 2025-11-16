//
//  main.c
//  11
//
//  Created by 한서윤 on 11/16/25.
//

#include <stdio.h>

int main(void) {
    int i = 300;
    
    int *pi = &i;
    char *pc = &i;
    
    printf("%i, %i, %i\n", i, *pi, *pc);

}
