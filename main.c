#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
 setlocale(LC_ALL,"Turkish");


//kenar uzunluklar� verilen ��genlerin hangi t�r ��gen oldu�unu hesaplayan program

   int a=0,b=0,c=0;
   char buyuk;
   printf("��genin kenar uzunluklar�n� giriniz:\n");
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
        else{printf("bu ��gen olamaz");}
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
        else{printf("bu ��gen olamaz");}
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
        else{printf("bu ��gen olamaz");}
   }



   else{
    printf("bu ��gen olamaz");
   }

if (buyuk=='A'){
    if(a*a == b*b + c*c){
        printf("dik ��gen");
    }else if(a*a<b*b+c*c){
        printf("k���k a��l� ��gen");
    }else{
         printf("geni� a��l� ��gen");
    }
}else if(buyuk=='B'){
    if(b*b==a*a+c*c){
        printf("dik ��gen");
    }else if(b*b<a*a+c*c){
        printf("k���k a��l� ��gen");
    }else{
         printf("geni� a��l� ��gen");
    }
}
else
 if(c*c==(a*a)+(b*b)){
        printf("dik ��gen");
    }else if(c*c<(a*a)+(b*b)){
        printf("k���k a��l� ��gen");
    }else{
         printf("geni� a��l� ��gen");
    }

























    return 0;
}
