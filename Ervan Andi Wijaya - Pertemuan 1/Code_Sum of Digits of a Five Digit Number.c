#include <stdio.h>

int main() {

  int n, temp[5], hasil = 0;
  scanf("%d", &n);
  for (int i = 0; i <= 4; i++) {
    temp[i] = n % 10;
    n -= temp[i];
    n /= 10;
    hasil += temp[i];
  }
  printf("%d\n", hasil);
  return 0;
}
