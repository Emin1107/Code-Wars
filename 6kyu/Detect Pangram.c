#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_pangram(const char *str_in) 
{
    int mask[26] = {};
  
    for(size_t i = 0; i < strlen(str_in); i++)
    {
      int val = 0;
      if(isalpha(str_in[i]))
        {
          if(islower(str_in[i]))
          {
            val = str_in[i] - 'a';
          }
          else if(isupper(str_in[i]))
          {
            val = str_in[i] - 'A';
          }
        }
      else
      {
        continue;
      }
      mask[val]++;
    }
    
    for(size_t i = 0; i < 26; i++)
    {
      if(mask[i] == 0)
      {
        return false;
      }
    }
  return true;
}