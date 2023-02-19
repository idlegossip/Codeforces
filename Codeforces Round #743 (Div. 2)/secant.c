#include<stdio.h>
double func(double x)
{
    return x*x*x*x-x-10;
}
int main()
{
    double x1=1,x2=2;
    double e=0.000001;
    if(func(x1)*func(x2)>0)
    {
        printf("Error\n");
        return 0;
    }
     double x3;
     double f1=func(x1);
     double f2=func(x2);
    while(x1!=x2)
    {

        x3=(x1*f2-x2*f1)/(f2-f1);
      //  if(abs((x1-x2)/x3)>e)
       // {
           x1=x2;
           x2=x3;
           f1=f2;
           f2=func(x3);
       // }
       // else
        //{
        //  break;
       // }


    }
    printf("Root =  %.5llf\n",x3);

}

