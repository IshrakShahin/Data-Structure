#include<stdio.h>

int gcd(int num1, int num2) {
  if (num2)
    return gcd(num2, num1 % num2);
  else
    return num1 < 0 ? -num1 : num1;
}

int main()
{
  int a,b,c;
  printf("Enter two numbers : ");
  scanf("%d %d",&a, &b);
  c = gcd(a,b);
  printf("\nGCD of %d and %d is : %d",a,b,c);

  return 0;
}
