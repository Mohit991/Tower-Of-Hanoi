#include <stdio.h>
#include <stdlib.h>
void toh(int n,char frompeg,char topeg, char auxpeg)
{
  if(n==1)
  {
      printf("Move Disk 1 from peg %c to peg %c\n",frompeg,topeg);
      return;
  }
  toh(n-1,frompeg,auxpeg,topeg);
  printf("Move disk %d from peg %c to peg %c\n",n,frompeg,topeg);
  toh(n-1,auxpeg,topeg,frompeg);
}
int main()
{
    toh(3,'A','B','C');
        return 0;
}
