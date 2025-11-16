//
//  main.c
//  11
//
//  Created by 한서윤 on 11/16/25.
//

#include <stdio.h>
char *proverb="All that glisters...";
void setPointer(char**q)
{
    *q = proverb;
}
int main(void)
{
    char*p = "zzz";
    setPointer(&p);
    printf("%s\n",p);
    
    return 0;
}
