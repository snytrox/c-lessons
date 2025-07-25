#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
 setlocale(LC_ALL,"Turkish");


//kenar uzunluklarý verilen üçgenlerin hangi tür üçgen olduðunu hesaplayan program

   int a=0,b=0,c=0;
   char buyuk;
   printf("üçgenin kenar uzunluklarýný giriniz:\n");
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
        else{printf("bu üçgen olamaz");}
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
        else{printf("bu üçgen olamaz");}
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
        else{printf("bu üçgen olamaz");}
   }



   else{
    printf("bu üçgen olamaz");
   }

if (buyuk=='A'){
    if(a*a == b*b + c*c){
        printf("dik üçgen");
    }else if(a*a<b*b+c*c){
        printf("küçük açýlý üçgen");
    }else{
         printf("geniþ açýlý üçgen");
    }
}else if(buyuk=='B'){
    if(b*b==a*a+c*c){
        printf("dik üçgen");
    }else if(b*b<a*a+c*c){
        printf("küçük açýlý üçgen");
    }else{
         printf("geniþ açýlý üçgen");
    }
}
else
 if(c*c==(a*a)+(b*b)){
        printf("dik üçgen");
    }else if(c*c<(a*a)+(b*b)){
        printf("küçük açýlý üçgen");
    }else{
         printf("geniþ açýlý üçgen");
    }

























    return 0;
}
