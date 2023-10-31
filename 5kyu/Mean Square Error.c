#include <stddef.h>

double mean_square_error(size_t n, const int a[n], const int b[n]) 
{
    double rez = 0.0;
    int sqr = 0;
    
    for(size_t i = 0; i < n; i++)
    {
      if(a[i] > b[i])
      {
        sqr = a[i] - b[i];
        sqr = sqr * sqr;
        rez += sqr;
      }
      else if(a[i] < b[i])
      {
        sqr = b[i] - a[i];
        sqr = sqr * sqr;
        rez += sqr;
      }
      else
      {
        rez += 0;
      }
    }
  return rez/n;
}