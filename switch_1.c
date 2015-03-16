/*
 * Author: Laura Ureche
 * Switch example
 */
#include<stdio.h>

int main() {
  char c;
  printf("Alegeţi o opţiune:\n\t[a] afişare\n\t[s] ştergere\n\t[e] ieşire\n");
  scanf("%c", &c);
  printf("Aţi ales: ");

  switch (c) {
    case 'a':
      printf("afişare");
      break;

    case 's':
      printf("ştergere");
      break;

    case 'e':
      printf("ieşire");
      break;

    default:
      printf("O opţiune inexistentă");
      break;
  }
  return 0;
}
