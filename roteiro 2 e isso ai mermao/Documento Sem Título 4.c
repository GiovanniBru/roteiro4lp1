
#include <stdio.h>
int eh_divisivel(int n, int n2){
     if(n % n2){
       return 0;
     }else{
        return 1;
     }
 }
 int eh_primo(int n){
      int i, m=0;
      for(i=1; i <= (n/2); i++){
           if(!(eh_divisivel(n,i))){
           m++;

           }
     if(m>1){
       return 0;
     }else{
        return 1;
     }

  }



 }

int main(){
   int d;

   puts("digite um numero");
   scanf("%d",&d);
   if(eh_primo(d)){
     printf("%d eh primo",d);
   }else{
     printf("%d n eh primo",d);
   }



return 0;
}
