#include <stdio.h>
int main()
{

  char text[80] = {' '};
  scanf("%s", &text);

  int i = 0, v = 0, c = 0;
  for (i = 0; i < 80; i++)
  {
    if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z'))
    {
      // printf("%c", text[i]);
      if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' || text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U')
      {
        v++;
      }
      else
        c++;
    }
  }
  printf("Vowels %d,Consonants %d", v, c);

  return 0;
}
