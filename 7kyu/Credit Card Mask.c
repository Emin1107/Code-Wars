#include <string.h>

char *maskify (char *masked, const char *string)
{
  int len = strlen(string);
  for(int i = 0; i < len-3; i++)
  {
    masked[i] = '#';
  }
  masked[len] = string[len];
  masked[len-1] = string[len-1];
  masked[len-2] = string[len-2];
  masked[len-3] = string[len-3];
  masked[len-4] = string[len-4];
    masked[len+1] = '\0';
    
  return masked; // return it
}