#include <stdio.h>
int convert(int h){
 switch(h){
   case (13):
       return 1;
       break;
    case (14):
       return 2;
       break;
    case (15):
       return 3;
       break;
    case (16):
       return 4;
       break;
    case (17):
       return 5;
       break;
    case (18):
       return 6;
       break;
    case (19):
       return 7;
       break;
    case (20):
       return 8;
       break;
    case (21):
       return 9;
       break;
    case (22):
       return 10;
       break;
    case (23):
       return 11;
       break;
    case (24):
       return 12;
       break;

  }

}
int main(){
  int o,m;

   puts("digite a hr em 24hs");
   scanf("%d",&o);
   puts("digite os min em 24hs");
   scanf("%d",&m);





   if(o>=13){
   printf("a hora em 12 e %d:%d pm",convert(o),m);
   }else{
   printf("a hora em 12 e %d:%d pm",o,m);
   }
return 0;
}


