#include <stdio.h>

main()
{
  int loops, loopcount;
  int n, count;
  float x, sum, avrg;
  printf("How many list?\n");
  scanf(" %d", &loops);
  for (loopcount = 1; loopcount <= loops; loopcount++)
  {
    sum = 0;
    // ans = 0;
    printf("How many number in list? %d\n", loopcount);
    scanf(" %d", &n);
    for (count = 1; count <= n; count++)
    {
      printf("x = ");

      scanf("%f", &x);
      // sum += tmp;
      sum = sum + x;
    }
    avrg = sum / n;
    printf("%f\n", avrg);
  }
}