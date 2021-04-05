#include <stdio.h>

int main()
{
  int Number, Reminder, Sum;

  printf("\nPlease Enter any number\n");
  scanf("%d", &Number);

  for (Sum=0; Number > 0;Number=Number/10)
  {
     Reminder = Number % 10;
     Sum=Sum+ Reminder;  
  }

  printf("\n Sum of the digits of Given Number = %d", Sum);
  return 0;
}
