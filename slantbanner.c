#include <stdio.h>
 
  void main() {
  int N;
  scanf("%d", &N);
  for(int row = 0; row < N; ++row) {
        if(row % 3 == 0) {
            for(int col = 0; col < N; col += 3) {
            printf("*  ");
            }
        }else if(row % 3 == 1) {
            for(int col = 0; col < N; col += 3) {
            printf(" * ");
            }
        }else {
            for(int col = 0; col < N; col += 3) {
            printf("  *");
            }
        }
        printf("\n");
   }
 }