#include<stdio.h>
int main(){
  int n,i;
  int first=0,second=1,next,sum=0;
printf("enter number of terms");
scanf("%d",&n);
printf("fabonacci series up to %d terms\n",n);
for(i=1;i<=n;i++){
if(i==1){
   next=first;
}else if(i==2){
  next=second;
}else{
  next=first+second;
  first=second;
  second=next;
}
printf("%d",next);
sum+=next;
}
printf("\nsum of fibonacci series up to %d terms=%d\n",n,sum);
return 0;
}
  