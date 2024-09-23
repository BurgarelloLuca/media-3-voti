#include <iostream>

int main() {
  float voto1, voto2, voto3, media;
  printf("inserire il primo voto");
  scanf("%f", &voto1);
  printf("inserire il secondo voto");
  scanf("%f", &voto2);
  printf("inserire il terzo voto");
  scanf("%f", &voto3);
  media = (voto1 + voto2 + voto3) / 3;
  printf("media = %f", media);


}
