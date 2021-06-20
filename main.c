#include <stdio.h>

/* prototype the function */
int is_even(int number)
{
  return number % 2 == 0;
}

int main(void) {
  
  int number_input;
  int num_array[5] = {0};

  /* get the size of the array, no matter what size it is
     allows for changing the size dynamically */
  int array_size = sizeof(num_array) / sizeof(int);

  for(int i = 0; i < array_size; i++)
  {
    printf("Enter a number: \n");
    scanf("%d", &num_array[i]);
  }
    
  for(int i = 0; i < array_size; i++)
  {
    if(is_even(num_array[i]))
    {
      printf("Number is even.\n");
    }
    else
    {
      printf("Number is odd.\n");
    }
  }
  return 0;
}