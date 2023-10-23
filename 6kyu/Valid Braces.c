#include <stdbool.h>

bool valid_braces (const char *b)
{
	int m = 0, s = 0, v = 0, c = 0;
  char* stack[1000] = {0};
  
  while(*b)
  {
    if(*b == '(')
    {
      m++;
      stack[++c] = 1;
    }
    if(*b == '[')
    {
      s++;
      stack[++c] = 2;
    }
    if(*b == '{')
    {
      v++;
      stack[++c] = 3;
    }
    
    if(*b == ')')
    {
      if(stack[c] == 1)
      {
        m--;
        c--;
      }
      else
      {
        return false;
      }
    }
    if(*b == ']')
    {
      if(stack[c] == 2)
      {
        s--;
        c--;
      }
      else
      {
        return false;
      }
    }
    if(*b == '}')
    {
      if(stack[c] == 3)
      {
        v--;
        c--;
      }
      else
      {
        return false;
      }
    }
    *b++;
  }
  if(m > 0 || s > 0 || v > 0)
  {
    return false;
  }
  return true;
}