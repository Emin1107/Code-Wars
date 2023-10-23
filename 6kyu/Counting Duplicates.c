#include <stddef.h>
#include <ctype.h>
#include <string.h>

size_t duplicate_count(const char *text) 
{
  int mask[256] = {0};
  for(size_t i = 0; i < strlen(text); i++)
  {
    if(isupper(text[i]))
    {
      int letter = text[i] + 32;
      mask[letter]++;
      continue;
    }
    mask[text[i]]++;
  }
  size_t rez = 0;
  for(size_t i = 0; i < 256; i++)
  {
    if(mask[i] > 1)
    {
      rez++;
    }
  }
  return rez;
}