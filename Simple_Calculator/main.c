#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

/*
This is a simple calculator program, which demonstrate
basic c language concepts such as function call, basic math operations,type conversion,
and basic input output operations


*/

void calc(){

int firstval=0;
int secondval=0;
int operation=6;
op: printf("operation 1= *, 2= /, 3= + , 4= -  , or 0 to exit\n");
scanf("%d" ,&operation);
 double result;
while(operation>0 ){





printf("first value ");
scanf("%d",&firstval );
printf("second value ");
scanf("%d",&secondval);

   switch(operation){
case 1:
  result=firstval*secondval;
  break;

case 2:
    result=(double)firstval/(double)secondval;
    break;

case 3:
    result=firstval+secondval;
    break;

case 4:
    result=firstval-secondval;
    break;


default:
    break;
    }
if(operation!=2){
     printf("%d\n",(int)result);
}else{
 printf("%lf\n",result);
}




goto op;
    }



}




int main(void){

    calc();

    return 0;
}
