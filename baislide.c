#include <stdio.h>
int main() {
int i,j,k,x=0;
for(i=1;i<5;i++)
for(j=0;j<i;++j){
switch(i+j){
case 0:x=x+1;
break;
case 1:
case 2:
case 3: x=x+2;
break;
}}
printf("%d",x);
}