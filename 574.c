#include <stdio.h>
#include <math.h>

double x(double n)
{
    int inteiro = n;
    double dcml = n - inteiro;
    int ard = round(dcml*100);
    if(dcml == 0.0 || ard%10==0)
    {
        return printf("%.1lf\n",n);
    }
    else
    {
        return printf("%.2lf\n",n);
    }
}

int main()

{
    double ctd,alq,vpr,vf,vt,vi,ti,tt,icms,vp;
    int a;

    scanf("%lf%lf%lf%lf",&ctd,&alq,&vp,&vf);

    vpr = ctd * vp;
    vf = ctd * vf;
    vt = vpr + vf;
    
    if(vp > 2500)
    {
        vi = vpr * 0.60;
        a = 1;
    }
    else
    {
        vi = vt * 0.60;
        a = 0;
    }
    icms = (vt+vi)/(100 - alq)*alq;
    ti = vi + icms;
    tt = vt + ti;

    x(ctd);
    x(vpr);
    x(vf);
    x(vt);
    x(vi);
    x(icms);
    x(ti);
    x(tt);
    if (a == 1)
    {
        printf("Impostos calculados sem o frete");
    }
    else
    {
        printf("Impostos calculados com o frete");
    }


    return 0;
}
