#include <stdio.h>
#include <math.h>
#define PI (3.14159265358979323846)
#define g (10)

double v0;
double time;
double height;
double distance;
double angle;
double hob;//height_of_building


int main()
{
    printf("Calculate-of-The-Ballistic-Impact\n");
    printf("  / v0\n");
    printf(" /\n");
    printf("/___distance\n\n");

    printf("Please input the height of building\n");
    scanf("%lf", &hob);
    printf("Please input the v0\n");
    scanf("%lf", &v0);
    printf("Please input the angle\n");
    scanf("%lf", &angle);

    angle = (angle/180)*PI;

height = hob + pow( v0 * sin(angle),2)/ (2*g) ;/*(v0*sinθ)²/2g*/
/*time = (2*v0*sin(angle))/g;//no building*/
time = ((2*v0*sin(angle))/g) + (sqrt((2*g*hob)+pow(v0*sin(angle),2))-v0*sin(angle))/g;
/*distance = pow(v0,2) * sin(2 * angle)/ g;//no building*/
distance = (((2*v0*sin(angle))/g) + (sqrt((2*g*hob)+pow(v0*sin(angle),2))-v0*sin(angle))/g)*v0*cos(angle);

/*printf("height =%lf \n", height);
printf("time =%lf \n", time);
printf("distance =%lf \n", distance);*/

int x,y;
printf("Do you have the specific time?\n1.Yes  2.NO\n");
scanf("%d",&x);

if (x==1)
{
    printf("When do you want the result?\n");
    scanf("%lf",&time);


    height = hob + (v0 * sin(angle) * time) - (g * pow(time,2))/ 2;

    if (height<=0)
    {
        printf("The height of the given time is 0.\n");
    }

    if (height>0)
    {
        printf("The height of the given time is %f.\n",height);
    }
}

if (x==2)
{
    printf("height =%lf \n", height);
    printf("time =%lf \n", time);
    printf("distance =%lf \n", distance);
}

if (x!=1,x!=2) return NULL;
    return r;
}
