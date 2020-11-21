#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,flag=-1;
    printf("Enter value of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>=0 && a<=10)&&(b>=0 && b<=10)&&(c>=0 && c<=10)){
        if(((a+b)>c)&&((b+c)>a)&&((c+a)>b)){
            flag=1;
            if((a==b)&&(b==c))
                
                 printf("\n It's an  Equilateral Triangle...");
                 else if((a==b)||(b==c)||(c==a))
                     printf("\n It's an Isosceles Triangle...");
                else
                printf("\n It's is a Scalene Triangle...");
                
            
            
            
        }
    }
if (flag==-1)
printf("Invalid Input...");

}