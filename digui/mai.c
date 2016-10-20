# include <stdio.h>

int fun(int n){
  int r;
  if(n<0){
    printf("input errer");
  }else if(n==0 || n==1){
    r = 1;
  }else{
    r =  n*fun(n-1);
  }
  return r;

}

int main()
{
  printf("plase input a number\n");
  int n;
  scanf("%d",&n);
  int res;
  res = fun(n);
 printf("res = %d",res);
 return 0;
}
