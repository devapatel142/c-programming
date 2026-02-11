#include <stdio.h>

int main() {
   int tea,candy;
   printf("enter the amount party of tea and candy.\n");
   scanf(" %d %d",&tea,&candy);
   if(tea<=5||candy<=5)
   {
printf("0");
}
else if(tea>=5&&candy>=5)
{
    printf("1");
}
else{
    printf("2");
}
    return 0;
}