bool better_than_average(const int class_points[], int class_size, int your_points) 
{
  int avg = 0;
  for(int i = 0; i < class_size; i++)
  {
    avg += class_points[i];
  }
  avg = avg / class_size;
  if(your_points > avg)
  {
    return true;
  }
  return false;
}