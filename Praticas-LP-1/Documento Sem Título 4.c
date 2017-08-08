#include <stdio.h>




int main(){
 int n, i, n1=0, n2=1, n0=0;

 puts("digite n");
 scanf("%d", &n);


 for(i=0; i<=n;i++){
  
  n3=n1+n2;
  n1=n2;
  n2=n3;
  printf(%d,n1);
  printf(%d,n2);

 }

 return 0;
}

