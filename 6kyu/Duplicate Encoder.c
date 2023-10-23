#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *DuplicateEncoder (const char *string)
{
  int mask[256] = {0};
  for(size_t i = 0; i < strlen(string); i++)
  {
    if(isupper(string[i]))
    {
      int letter = string[i] + 32;
      mask[letter]++;
      continue;
    }
    mask[string[i]]++;
  }
  char* rez = (char*)malloc(sizeof(char) * strlen(string)+1);
  int j = 0;
  for(size_t i = 0; i < strlen(string); i++)
  {
    if(isupper(string[i]))
    {
      if(mask[string[i] + 32] > 1)
      {
        rez[j++] = ')';
        continue;
      }
      else
      {
        rez[j++] = '(';
        continue;
      }
    }
    if(mask[string[i]] > 1)
    {
      rez[j++] = ')';
    }
    else
    {
      rez[j++] = '(';
    }
  }
  rez[j] = '\0';
  return rez;
}