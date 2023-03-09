#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buff[80];
    while(gets(buff)){
    if(!strcmp(buff,"Morozov Viktor I992"))
        printf("OK\n");
    else 
        printf("NOT OK\n");
    }
    return 0;
}
