# include <stdio.h>
# include "max.h"
#include "min.h"

int main()
{
   int a1=33;
   int a2=21;

   int maxnum = max(a1,a2);
   int minnum = min(a1,a2); 
   printf("大数是%d\n小数是%d\n",maxnum,minnum);

}
