#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cmdbuf[512] = {'0'};
    char c;
    int i;
    while(1) {
      printf("\nmy-shell#");
      i = 0;
      while((c=getchar())!='\n') {
        cmdbuf[i++] = c;
      }
      cmdbuf[i] = '\0';
      if (!strcmp(cmdbuf,"exit",sizeof("exit")))
        break;
      system(cmdbuf);
    }
  return 0;
}
