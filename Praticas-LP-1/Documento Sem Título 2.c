#include <stdio.h>




int main(){
 float s, d, f;

puts("digite sua idade:");
scanf("%f", &s);


if(s<=420){
  f= s * 0.08;
  d= s - f;
  printf(" o valor do desconto foi: %f, e o valor do salario liquido eh:%f", f, d);

}if(s>1350){
  f= s * 0.1;
  d= s - f;
  printf(" o valor do desconto foi: %f, e o valor do salario liquido eh:%f", f, d);

}
else{
 f= s * 0.09;
 d= s - f;
 printf(" o valor do desconto foi: %f, e o valor do salario liquido eh:%f", f, d);

}

 return 0;
}

