#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, size;
  int *numbers;
  scanf("%d", &size);

  numbers = (int *)malloc(sizeof(int) * size);

  for (i = 0; i < size; i++)
  {
    scanf("%d", &numbers[i]);
  }

  for (i = 0; i < size; i++)
  {
    if (numbers[i] % 3 == 0 && numbers[i] % 5 == 0)
    {
      printf("bar\n");
    }
    else if (numbers[i] % 3 == 0)
    {
      printf("fizz\n");
    }
    else if (numbers[i] % 5 == 0)
    {
      printf("buzz\n");
    }
    else
    {
      printf("%d\n", numbers[i]);
    }
  }
}

// NOTE: https://c-faq.com/stdio/scanfprobs.html
