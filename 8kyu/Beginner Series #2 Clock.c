int past(int hours, int minutes, int seconds) 
{
  int h = hours * 3600000;
  int m = minutes * 60000;
  int s = seconds * 1000;
  return h + m + s;
}