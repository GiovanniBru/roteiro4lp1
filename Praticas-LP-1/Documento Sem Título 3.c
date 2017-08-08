#include <stdio.h>




int main(){
 int n,m;

 puts("digite um numero seu safado");
 scanf("%d", &n);
 m=n;

while(n!=0){
 
  puts("digite um numero seu safado");
  scanf("%d", &n);
  
  if(n>m){
   m=n;
  }
  
  printf("o maior numero ate agr eh:%d", m);
 }

 return 0;
}
