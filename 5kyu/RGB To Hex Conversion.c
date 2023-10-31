void rgb (int r, int g, int b, char hex[6 + 1])
{
  char br[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
  int xr = r/16;
  int yr = r%16;
  int xg = g/16;
  int yg = g%16;
  int xb = b/16;
  int yb = b%16;
  if(r < 0)
  {
    xr = 0;
    yr = 0;
  }
  else if(r > 255)
  {
    xr = 15;
    yr = 15;
  }
  if(g < 0)
  {
    xg = 0;
    yg = 0;
  }
  else if(g > 255)
  {
    xg = 15;
    yg = 15;
  }
  if(b < 0)
  {
    xb = 0;
    yb = 0;
  }
  else if(b > 255)
  {
    xb = 15;
    yb = 15;
  }
  hex[0] = br[xr];
  hex[1] = br[yr];
  hex[2] = br[xg];
  hex[3] = br[yg];
  hex[4] = br[xb];
  hex[5] = br[yb];
  hex[6] = '\0';
}