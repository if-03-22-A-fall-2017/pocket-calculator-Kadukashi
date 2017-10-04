/*Gabriel Aigner
2AHIF
27.09.2017*/
#include <stdio.h>

int menu(int input);
double add();
double subtracte();
double multiply();
double divide();
int look_what_it_is(int input);

int main(int argc, char const *argv[])
{
  int chouse = 0;
  chouse = menu(chouse);
  look_what_it_is(chouse);

  return 0;
}

int look_what_it_is(int chouse)
{
  double result = 0;
  switch (chouse)
  {
    case 1: printf("%.2lf\n", add());
                printf("\n");
      break;
    case 2: printf("%.2lf\n", subtracte());
                printf("\n");
      break;
    case 3: printf("%.2lf\n", multiply());
                printf("\n");
      break;
    case 4: printf("%.2lf\n", divide());
                printf("\n");
      break;
    case -1:
      break;
    default: printf("Input not allowed, please try again!");
             menu(chouse);
             look_what_it_is(chouse);
      break;
  }
  return result;
}

double add()
{
  double first_number = 0;
  double second_number = 0;
  printf("First Number: ");
  scanf("%lf", &first_number);
  printf("Second Number: ");
  scanf("%lf", &second_number);
  double result = first_number + second_number;
  return result;
}

double subtracte()
{
  double first_number = 0;
  double second_number = 0;
  printf("First Number: ");
  scanf("%lf", &first_number);
  printf("Second Number: ");
  scanf("%lf", &second_number);
  double result = first_number - second_number;
  return result;
}

double multiply()
{
  double first_number = 0;
  double second_number = 0;
  printf("First Number: ");
  scanf("%lf", &first_number);
  printf("Second Number: ");
  scanf("%lf", &second_number);
  double result = first_number * second_number;
  return result;
}

double divide()
{
  double first_number;
  double second_number;
  printf("First Number: ");
  scanf("%lf", &first_number);
  printf("Second Number: ");
  scanf("%lf", &second_number);
  double result = first_number / second_number;
  return result;
}

int menu(int chouse)
{
  printf("Menu\n");
  printf("Add?(1)\n");
  printf("Subtracte?(2)\n");
  printf("Multiply?(3)\n");
  printf("Divide?(4)\n");
  printf("Close programm?(-1)\n");
  printf("Input: ");
  scanf("%d", &chouse);
  return chouse;
}
