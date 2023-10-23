#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

// returned string has to be dynamically allocated and will be freed by the caller
char *alphabet_position(const char *text) 
{
  size_t len = strlen(text);
  char* rez = (char*)malloc(sizeof(char) * (len+1));
  int c = 0;
  
  for(int i = 0; text[i] != '\0'; i++)
  {
    if(isalpha(text[i]))
    {
      char letter = tolower(text[i]);
      int pos = letter - 'a' + 1;
      if(c > 0)
      {
        rez[c] = ' ';
        c++;
      }
      //puts the number(position of the letter in the alphabet) into rez 
      int numDig = snprintf(NULL, 0, "%d", pos);
      snprintf(rez + c, numDig + 1, "%d", pos);
      c += numDig;
    }
  }
  
  rez[c] = '\0';
  return rez;
}