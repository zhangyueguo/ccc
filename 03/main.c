#include <stdio.h>

int main(int argv,char* argc[])
{
    printf("shijie niaho \n"); 
    int i;
    for(i=0;i<argv;i++)
    {
       printf("argc[%d] is %s\n",i,argc[i]);
    }
    return 0;
}
