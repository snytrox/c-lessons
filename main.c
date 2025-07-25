#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
 setlocale(LC_ALL,"Turkish");


// a program that calculates the type of triangle given the side lengths of the triangles.

   int a=0,b=0,c=0;
   char buyuk;
   printf("Enter the side lengths of the triangle:\n");
   scanf("%d%d%d",&a,&b,&c);
   if(a+b>c && a+c>b && c+b>a){
        if(a>=b){
                if(a-b<c){
                    if(a>=b && a>=c){
        char buyuk='A';

}else if(b>=a && b>=c){
buyuk='B';}
else{
    buyuk='C';
}
                }}
        else if(a<b){
                if(b-a<c){
                    if(a>=b && a>=c){
        buyuk='A';

}else if(b>=a && b>=c){
buyuk='B';}
else{
    buyuk='C';
}
                }}
        else{printf("this is not a triangle");}
        if(c>=a){
                if(c-a<b){
                    if(a>=b && a>=c){
        buyuk='A';

}else if(b>=a && b>=c){
buyuk='B';}
else{
    buyuk='C';
}
                }}
        else if(c<a){
                if(a-c<b){
                    if(a>=b && a>=c){
        buyuk='A';

}else if(b>=a && b>=c){
buyuk='B';}
else{
    buyuk='C';
}
                }}
        else{printf("this is not a triangle");}
        if(a>=c){
                if(a-c<b){
                    if(a>=b && a>=c){
        buyuk='A';

}else if(b>=a && b>=c){
buyuk='B';}
else{
    buyuk='C';
}
                }}
        else if(c>a){
                if(c-a<b){
                    if(a>=b && a>=c){
        buyuk='A';

}else if(b>=a && b>=c){
buyuk='B';}
else{
    buyuk='C';
}
                }}
        else{printf("this is not a triangle");}
   }



   else{
    printf("this is not a triangle");
   }

if (buyuk=='A'){
    if(a*a == b*b + c*c){
        printf("right triangle");
    }else if(a*a<b*b+c*c){
        printf("small angle triangle");
    }else{
         printf("obtuse angle triangle");
    }
}else if(buyuk=='B'){
    if(b*b==a*a+c*c){
        printf("right triangle");
    }else if(b*b<a*a+c*c){
        printf("small angle triangle");
    }else{
         printf("obtuse angle triangle");
    }
}
else
 if(c*c==(a*a)+(b*b)){
        printf("right triangle");
    }else if(c*c<(a*a)+(b*b)){
        printf("small angle triangle");
    }else{
         printf("obtuse angle triangle");
    }

























    return 0;
}
