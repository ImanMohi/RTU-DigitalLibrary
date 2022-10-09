#include <stdio.h>

int
factorial (int number)
{
  if (number == 0)
    return 1;
  else
    return (number * factorial (number - 1));
}

int
binomial (int number, int choose)
{
  if (number == 0)
    return 1;
  else
    return factorial (number) / (factorial (choose) * factorial (number - choose));
}

void
ptriangle (int rows)
{
  int number, spaces, choose;
  for (number = 0; number <= rows; number++)
    {
      for (spaces = rows; spaces >= number; spaces--)
        {
          printf (" ");
        }
      for (choose = 0; choose <= number; choose++)
        {
          printf ("%d ", binomial (number, choose));
        }
      printf ("\n");
    }
}

int
main (void)
{
  int rows;

  do
    {

      printf ("Input the rows of the triangle (possible values [0..4]): ");
      scanf ("%d", &rows);
      if (0 > rows) printf ("%d is smaller than 0\n", rows);
      if (4 < rows) printf ("%d is greater than 4\n", rows);
    }
  while (rows < 0 || rows > 4);

  ptriangle (rows);

  return 0;
}