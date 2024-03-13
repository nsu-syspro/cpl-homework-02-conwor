#include <stdio.h>

int a, b;

int main() {
  scanf("%d", &a);
  scanf("%d", &b);

  printf("arithmetic operators:\n");
  printf("A + B  : %d\n", a + b);
  printf("A - B  : %d\n", a - b);
  printf("A * B  : %d\n", a * b);
  printf("A / B  : %d\n", a / b);
  printf("A %% B  : %d\n", a % b);
  printf("-A     : %d\n", -a);
  printf("\n");
  printf("logical operators:\n");
  printf("A && B : %d\n", a && b);
  printf("A || B : %d\n", a || b);
  printf("!A     : %d\n", !a);
  printf("\n");
  printf("bitwise operators:\n");
  printf("A & B  : %d\n", a & b);
  printf("A | B  : %d\n", a | b);
  printf("A ^ B  : %d\n", a ^ b);
  printf("A << B : %d\n", a << b);
  printf("A >> B : %d\n", a >> b);
  printf("~A     : %d\n", ~a);
  printf("\n");
  printf("relational operators:\n");
  printf("A == B : %d\n", a == b);
  printf("A != B : %d\n", a != b);
  printf("A < B  : %d\n", a < b);
  printf("A > B  : %d\n", a > b);
  printf("A <= B : %d\n", a <= b);
  printf("A >= B : %d\n", a >= b);

  return 0;
}
