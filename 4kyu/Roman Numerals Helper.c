#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//#include <bits/stdc++.h>

unsigned from_roman (const char *roman)
{
  int v[100];
  int sum = 0;
  v['I'] = 1;
  v['V'] = 5;
  v['X'] = 10;
  v['L'] = 50;
  v['C'] = 100;
  v['D'] = 500;
  v['M'] = 1000;
  v['\0'] = 0;
  
  for(size_t i = 0; roman[i] != '\0'; i++)
  {
    if(v[roman[i]] < v[roman[i+1]])
    {
      sum -= v[roman[i]];
    }
    else
    {
      sum += v[roman[i]];
    }
  }
  return sum;
}

void to_roman(unsigned number, char *roman)
{
  int j = 0;
  while(number != 0)
  {
    if(number >= 1000)
    {
      roman[j] = 'M';
      j++;
      number -= 1000;
    }
    else if(number >= 900)
    {
      roman[j] = 'C';
      j++;
      roman[j] = 'M';
      j++;
      number -= 900;
    }
    else if(number >= 500)
    {
      roman[j] = 'D';
      j++;
      number -= 500;
    }
    else if(number >= 400)
    {
      roman[j] = 'C';
      j++;
      roman[j] = 'D';
      j++;
      number -= 400;
    }
    else if(number >= 100)
    {
      roman[j] = 'C';
      j++;
      number -= 100;
    }
    else if(number >= 90)
    {
      roman[j] = 'X';
      j++;
      roman[j] = 'C';
      j++;
      number -= 90;
    }
    else if(number >= 50)
    {
      roman[j] = 'L';
      j++;
      number -= 50;
    }
    else if(number >= 40)
    {
      roman[j] = 'X';
      j++;
      roman[j] = 'L';
      j++;
      number -= 40;
    }
    else if(number >= 10)
    {
      roman[j] = 'X';
      j++;
      number -= 10;
    }
    else if(number >= 9)
    {
      roman[j] = 'I';
      j++;
      roman[j] = 'X';
      j++;
      number -= 9;
    }
    else if(number >= 5)
    {
      roman[j] = 'V';
      j++;
      number -= 5;
    }
    else if(number >= 4)
    {
      roman[j] = 'I';
      j++;
      roman[j] = 'V';
      j++;
      number -= 4;
    }
    else if(number >= 1)
    {
      roman[j] = 'I';
      j++;
      number -= 1;
    }
  }
  roman[j] = '\0';
}