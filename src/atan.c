#include <stdio.h>
#include<math.h>
double atan(double x)
{	
    double min_e=0x0010000000000000;
    double e=1;
    double sign=-1;
    double _x=x;
    double res=x;
    double n=1;
    while(e>=min_e){
	 n=n+2;
        _x=_x*x*x*sign;
	 e=_x/n;
	 res=res+e;
    }
    return res;

}



int main()
{
    printf("%e \n",atan(1));
    printf("%e \n",M_PI_4);
    printf("%e \n",M_PI_4-atan(1));
    return 0;
}
