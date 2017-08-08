#include <stdio.h>




int main(){
 float p, h, T;

puts("digite sua idade:");
scanf("%f", &h);
puts("agora digite o preço do produto:");
scanf("%f", &p);

if(h<=18){
  h= p * 0.1;
  T=p - h;
  printf(" o valor do desconto foi: %f, e sapato do sapato final eh:%f", h, T);

}else{
  h=p * (0.2);
  T=p - h;
  printf(" o valor do desconto foi: %f, e sapato do sapato final eh:%f", h, T);

}

 return 0;
}
