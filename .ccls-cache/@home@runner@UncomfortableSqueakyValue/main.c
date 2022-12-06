#include <stdio.h>

int main(void) {
  int inarr[10], odd[10], even[10];
  int e=0,o=0;
  for(int i=0;i<10;i++)
    {
      scanf("%d",&inarr[i]);
    }
  for(int i=0;i<10;i++)
    {
      printf("%d  ",inarr[i]);
    }
  for(int i=0;i<10;i++)
    {
      if(inarr[i]%2==0)
      {
        even[e]=inarr[i];
        e++;
      }
      else{
        odd[o]=inarr[i];
        o++;
      }
    }
  printf("\nEven:");
  for(int i=0;i<e;i++)
    {
      printf("%d  ",even[i]);
    }
  printf("\nOdd:");
  for(int i=0;i<o;i++)
    {
      printf("%d  ",odd[i]);
    }
  return 0;
}