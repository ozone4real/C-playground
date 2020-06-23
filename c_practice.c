#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  unsigned int *value = malloc(300);
  *value = 100000000000000000;
  // printf("%i\n", value);
  free(value);
  return 0;
}

int main()
{
  double amount= 0.2;
  char bonus =  'x';
  char total = amount + bonus;
  printf("%c\n", total);
  printf("%f\n", atof("30"));
  char amount_in_str[64];
  sprintf(amount_in_str, "%f", amount);
  printf("%s\n", amount_in_str);
  char names[] = {'a', 'b', 'c'};
  printf("%s", names);
  if(amount > 4) {
    printf("yesssss\n");
  } else
  {
    printf("Noooooo\n");
  }
  ;
  enum months { JAN=1, FEB, MARCH, APRIL, MAY };

  enum months first_month;
  first_month = JAN;
  printf("%d\n", first_month);
  
}

double farenheitToCelsius(int temperature) {
  return 1.8 * temperature + 32;
}

int main(int argc, char *argv[] ) {
  printf("%f\n", farenheitToCelsius(atoi(argv[1])));
}

// loop practice

// int main() {
//   int arr[5];
//   int sum = 0;
//   int i;
//   for(i=0; i < 5; i++) {
//     scanf("%i", &arr[i]);
//     sum += arr[i];
//   }
//   int avg = sum/5;

//   printf("The average is %i\n", avg);
//   char arr[] = { 'g', 'i', 'l', 'b', '\0' };
//   printf("%s\n", arr);
// }