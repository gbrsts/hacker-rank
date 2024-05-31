#include <stdio.h>

struct person {
  char name[50];
  int age, id;
  double salary;
};

void main() {
  struct person Gabriel;

  fgets(Gabriel.name, 50, stdin);
  scanf("%d", &Gabriel.age);
  scanf("%d", &Gabriel.id);
  scanf("%lf", &Gabriel.salary);

  printf("Register with the data: %s %d %d %.2lf", Gabriel.name, Gabriel.age, Gabriel.id, Gabriel.salary);
}