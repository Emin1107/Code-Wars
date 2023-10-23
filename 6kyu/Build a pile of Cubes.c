long long findNb(long long m)
{
  long long n = 0;
  long long rez = 1;
  while(n < m)
  {
    n += rez * rez * rez;
    if(n == m)
    {
      return rez;
    }
    rez++;
  }
  return -1;
}