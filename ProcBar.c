#include "ProcBar.h"

void process_bar()
{
  char bar[NUM];
  memset(bar,'\0',sizeof(bar));
  const char* lable="|/-\\";

  int i=0;
  while(i<101)
  {
    printf("[%-100s][%-3d%%][%c]\r",bar,i,lable[i%4]);
    fflush(stdout);
    bar[i]='#';
    i++;
    usleep(50000);
    

  }


}
