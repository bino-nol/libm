#include<stdio.h>
#include<math.h>
#include<float.h>
double a(double x)
{	
    double e=1;
    double sign=-1;
    double _x=x;
    double res=x;
    int n=1;
    if(x<1){
    	while(fabs(e)>0.000000000000000000000001){
	   n=n+2;
           _x=_x*x*x*sign;
	   e=_x/n;
	   res=res+e;
         }
    }
    return res;

}



int main()
{
    printf("%.40lf \n",a(0.003));
    printf("%.40lf \n",atan(0.003));
    return 0;
}
