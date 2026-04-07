#include <stdio.h>

int main() {
  int godina;

  printf("Unesite godinu: ");
  scanf("%d", &godina);

  if ((godina % 4 == 0 && godina % 100 != 0) || (godina % 400 == 0)) {
    printf("%d je prestupna godina.", godina);
  } else {
    printf("%d nije prestupna godina.", godina);
  }
}


#include <stdio.h>

int main() {
  int a;
  int b;
  int proizvod;

  printf("Unesite prvi broj: ");
  scanf("%d", &a);
  printf("Unesite drugi broj: ");
  scanf("%d", &b);
  proizvod = a * b;
  printf("Proizvod je: %d", proizvod)
}
