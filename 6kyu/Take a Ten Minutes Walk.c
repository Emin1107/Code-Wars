#include <stdbool.h>
#include <string.h>

// input is a null-terminated string

bool isValidWalk(const char *walk) 
{
  int mask[4] = {0};
  if(strlen(walk) > 10)
  {
    return false;
  }
  for(size_t i = 0; walk[i] != '\0'; i++)
  {
    if(walk[i] == 110)
    {
      mask[0]++;
    }
    if(walk[i] == 115)
    {
      mask[1]++;
    }
    if(walk[i] == 101)
    {
      mask[2]++;
    }
    if(walk[i] == 119)
    {
      mask[3]++;
    }
  }
  if(mask[0] - mask[1] == 0 && mask[2] - mask[3] == 0 && strlen(walk) == 10)
  {
    return true;
  }
  return false;
}