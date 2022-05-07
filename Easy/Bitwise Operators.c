#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k)
{
  int max1=0,max2,max3=0,i,arr[n],a=0,b=0,j,temp1=0,temp2=0,temp3=0,t=n-2;
  for(i=1;i<=n;i++)
  {
      arr[i-1]=i;
  }
  for(i=0;i<=t;i++)
  {
      a=arr[i];
      for(j=i+1;j<n;j++)
      {
          b=arr[j];
          temp1 = a&b;
          temp2 = a|b;
          temp3 = a^b;
          if(temp1<k)
          {
              if(temp1>max1)
              {
                max1 = temp1;
              }
        }
        if(temp2<k)
          {
              if(temp2>max2)
              {
                max2 = temp2;
              }
        }
        if(temp3<k)
          {
              if(temp3>max3)
              {
                max3 = temp3;
              }
        }
    }
  }
    printf("%d\n",max1);
    printf("%d\n",max2);
    printf("%d\n",max3);
}
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}