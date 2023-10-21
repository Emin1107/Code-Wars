#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void high_and_low (const char *strnum, char *result)
{
  int max, min;
  char* token;
  char* copy = strdup(strnum);
  
  token = strtok(copy, " ");
  max = min = atoi(token);
  
  while(token != NULL)
  {
    int br = atoi(token);
    if(br < min)
    {
      min = br;
    }
    if(br > max)
    {
      max = br;
    }
    token = strtok(NULL, " ");
  }
  
  sprintf(result, "%d %d", max, min);
}