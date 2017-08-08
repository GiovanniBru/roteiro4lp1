#include <stdio.h>

void Safada(int nu){
  int i,j;

  for(i=0;i<=nu;i++){
      for(j=1;j<=i;j++){
       printf("%d ", j);
      }
      printf("\n");
  }


}


int main(){
  int n;
   puts("digite um numero");
   scanf("%d",&n);

   Safada(n);

return 0;
}
