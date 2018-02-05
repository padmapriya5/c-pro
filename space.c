#include <stdio.h>
int main()
{
  int i, spaces;
  char a[30];
  printf("Hello Wrold");
  scanf("%s", a);
  for(i=0 ; a[0]!="\0" ; i++
    {
      if (a[i]=' ')
        {
          spaces++;
        }
    }
  printf("Number of spaces is %d", spaces);
  printf("Number of words is %d", spaces + 1);
}
