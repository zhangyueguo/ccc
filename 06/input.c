#include <stdio.h>

int main()
{
  int flag = 1;
  int i;
  int s=0;
  int cout=0;
  while(flag)
  {
    scanf("%d",&i);
    if(0==i) break;
     cout++;
    s+=i;
  }

  printf("%d,%d\n",s,cout);
   return 0;
}
  
