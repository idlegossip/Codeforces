#include<stdio.h>
double func(double x)
{
    return x*x-3;
}
int main()
{
    double a=1,b=2;
    double e=0.08;
    if(func(a)*func(b)>0)
    {
        printf("Error\n");
        return 0;
    }
     double c;
    for(int i=1;i<=6;i++)
    {
        printf("iteration %d error=%llf\n",i,fabs(a-b));
        if(abs(a-b)<=e)
        {

            break;
        }
        c=(a*func(b)-b*func(a))/(func(b)-func(a));
        if(func(a)*func(c)>0)
            a=c;
        else
            b=c;

    }
    printf("result between %llf %llf\n",a,b);
    printf("Root = %llf\n",c);

}
