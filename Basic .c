/*//write a program to hello  // problem 1
#include<stdio.h>
int main()
{
    printf("hello");
    return 0;
}



//write a program to addition of two number  // problem 2
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("enter the value of a=");
    scanf("%d",&a);
    printf("enter the value of b=");
    scanf("%d",&b);
    sum=a+b;
    printf("sum=%d",sum);
    return 0;
}




//write a program to calculate average of three number
#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("enter thr value of a=");    // problem 3
    scanf("%d",&a);
    printf("enter the value of b=");
    scanf("%d",&b);
    printf("enter the value of c=");
    scanf("%d",&c);
    avg=(a+b+c)/3;
    printf("avg=%f",avg);
    return 0;
}



//write a program to calculate simple interest
#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("enter the value of p=");
    scanf("%f",&p);
    printf("enter the value r=");      // problem 4
    scanf("%f",&r);
    printf("enter the value of t=");
    scanf("%f",&t);
    si=(p+r+t)/100;
    printf("simple interst=%f",si);

}




//rite a program which i/p privious currant reading & rate per unit of electricity cunsumption? cal. & print unit consumed & payble amount.
#include<stdio.h>

int main()
{
    float pr, cr, r, uc, pa;
    printf("enter the value of pr=");   // problem 5
    scanf("%f",&pr);
    printf("enter the value of cr=");
    scanf("%f",&cr);
    printf("enter the value of r=");
    scanf("%f",&r);
    uc=cr-pr;
    pa=uc*r;
    printf("uc=%f",uc);
    printf("pa=%f",pa);
    return 0;
 


}





//write a program which i/p two number from the user & swap the two number using two vairable
#include<stdlib.h>
int main()
{
    int a,b;
    printf("enter the value of a=");  //problem 6
    scanf("%d",&a);
    printf("enter the value of b=");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a+b;
    printf("a=%d\n",a);
    printf("b=%d",b);
    return 0;
}



//swap three vairiable
#include<stdlib.h>
int main()
{
    int a,b,c;
    printf("enter the value of a=");   //problem 7
    scanf("%d",&a);
    printf("enter the value of b=");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d\n",a);
    printf("b=%d",b);
    return 0;
}




//write a program to calculate area of cirlce
#include<stdio.h>
int main()
{
    float area, r;
    printf("enter the value of r=");   //problem 8
    scanf("%f",&r);
    area=3.14*r*r;
    printf("area=%f",area);
    return 0;
}





//isze of operator
#include<stdio.h>
int main()
{
    int a;
    printf("%d",sizeof (a));   // problem 9
    return 0;
}




// example
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a&b=");   //problem 10
    scanf("%d%d",&a,&b);
    c=a&b;
    printf("%d",c);
    return 0;
}



//example
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a&b=");     // problem 11
    scanf("%d%d",&a,&b);
    c = a/b;
    printf("%d",c);
    return 0;
}




//write a program using lift & right operetor x=128 and y=32? x>>1 and y<<2?
#include<stdio.h>
int main()
{
    int x=128, y=32;
    x=x>>1;                        // problem 12
    printf("x=%d\n",x);
    y=y<<2;
    printf("y=%d",y);
    return 0;

}






// increment & decrement
// Question 1
#include<stdio.h>
int main()                      // problem 13
{
    int a=5, b;
    b=a++;
    printf("%d",b);
    return 0;
}





//Question 2
#include<stdio.h>                  // problem 14
int main()
{
    int a=5;
    a=a++;
    printf("%d",a);
    return 0;
}




//Question 3
#include<stdio.h>               // problem 15
int main()
{
    int a=10, b;
    b=++b;
    printf("%d",b);
}



//Question 4
#include<stdio.h>
int main()
{
    int a=10, b=20, c;                // problem 16
    c=a++*--b;
    printf("a=%d\nb=%d\nc=%d", a,b,c);
    return 0;

}




//Question 5
#include<stdio.h>
int main()
{                                  // problem 17
    int a=10;
    float b=a;
    printf("b=%f",b);
    return 0;
    }





//Question 5
#include<stdio.h>                 // problem 18
int main()
{
    float a=10.5;
    int b=a;
    printf("b=%d",b);
    return 0;
    }




    // Mathematical function
    #include<stdio.h>                      //problem 19
    #include<math.h>
    int main()
    {
        float x,sinx,cosx;
        printf("enter the angle =");
        scanf("%f",&x);
        sinx=sin(x*(3.142/180.0));
        cosx=cos(x*(3.142/180.0));
        printf("sin=%f\n",sinx);
        printf("cos=%f",cosx);
    return 0;
    }
    

//write a program to calculate area of circle
#include<stdio.h>
int main()                          // problem 20
{
    float area,r;
    printf("enter the value of r=");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("area=%f",area);
    return 0;
}

#include<stdio.h>
int main()
{
    int x;                        //problem 21
    x=3+4-7*8/5%10;
    printf("x=%d",x);
    return 0;
}*/




#include<stdio.h>
int main()
{
    int x=3+4-56/5%10;
    printf("x=%d",x);
    return 0;
}