// Returns number of complete beeramid levels
int beeramid(double bonus, double price) 
{
  int i = 0;
    while(bonus >= 0)
    {
      bonus -= (((i+1)*(i+1))*price);
      if(bonus < 0)
      {
        break;
      }
      i++;
    }
  return i;
}