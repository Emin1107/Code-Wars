#include <stdlib.h>

//  return a dynamically allocated array
//  assign the length of this array to *z
//  memory will be freed by the test suite

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z) 
{
  int* rez = (int*)malloc(sizeof(int) * n1);
  int k = 0;
  for(size_t i = 0; i < n1; i++)
  {
    int flag = 0;
    for(size_t j = 0; j < n2; j++)
    {
      if(arr1[i] == arr2[j])
      {
        flag = 1;
        break;
      }
    }
    if(!flag)
    {
      rez[k++] = arr1[i];
    }
  }
  *z = k;
  rez = (int*)realloc(rez, sizeof(int) * (*z));
  return rez;
}