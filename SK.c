#include<math.h>
#define PI 3.1415926535897932384626433832795
#define G 6.67384E-11
#define g 9.80665
#define DAY 365
#define HOUR 24
#define MINUTE 60
#define SECOND 60
#define C 299792458


////Area, Surface Area and Volume reference sheet.
////Two-dimensional plane shapes and Three-dimensional solid shapes.

//Area Two-dimensional plane shapes.
//The measure of how many squares will fit into a shape.

double square(double a)
{
    return a*a;
}

double rectangle(double width,double height)
{
    return width*height;
}

double triangle(double base,double height)
{
    return 0.5*base*height;
}

double polygon(int number,double length,double apothem)
{
    return number*0.5*length*apothem;
}

double polyhedron(int side,int number,double length,double apothem)
{
    return side*polygon(number,length,apothem);
}

double circle(double radius)
{
    return PI*radius*radius;
}

double ellipse(double a_radius,double b_radius)
{
    return PI*a_radius*b_radius;
}

//Surface Area Three-dimensional solid shapes.
//The measure of the area of all outward facing sides.

double area_cube_square(double a)
{
    return 6*square(a);
}

double area_cube_rectangle(double width,double height)
{
    return (4*width*height)+(2*square(width));
}

double area_pyrimid_square(double base,double lateral)
{
    return square(base)+(4*triangle(base,lateral));
}

double area_pyrimid_rectangle(double width,double length,double lateral)
{
    return rectangle(width,length)+(2*triangle(width,lateral))+(2*triangle(length,lateral));
}

double area_pyrimid_polygon(int number,double base,double apothem,double lateral)
{
    return polygon(number,base,apothem)+(number*triangle(base,lateral));
}

double area_sphere(double radius)
{
    return 4*circle(radius);
}

double area_cylinder(double radius,double height)
{
    return (2*PI*radius*height)+(2*circle(radius));
}

//Volume Three-dimensional solid shapes.
//The measure of how many cubes will fit into a shape.

double volume_cube_square(double a)
{
    return a*a*a;
}

double volume_cube_rectangle(double width,double length,double height)
{
    return width*length*height;
}

double volume_pyrimid_square(double base,double height)
{
    return 1/3*square(base)*height;
}

double volume_pyrimid_rectangle(double width,double length,double height)
{
    return 1/3*rectangle(width,length)*height;
}

double volume_pyrimid_polygon(int number,double base,double apothem,double height)
{
    return 1/3*polygon(number,base,apothem)*height;
}

double volume_sphere(double radius)
{
    return 4/3*circle(radius)*radius;
}

double volume_cylinder(double radius,double height)
{
    return circle(radius)*height;
}

////Check Prime Number.

int prime(long long num)
{
    long long i;
    for(i=2;i<num;i++){
        if(num%i==0)
            return 0;
    }
    return 1;
}

////CALCULATORS OTHERS.

//Calculator Body Mass Index.

double body_mass_index(float weight,float height)
{
    return weight/pow(height/100,2);
}

            /* MATHEMATICS */

//Calculator Arithmetic Mean.

double arithmetic_mean(int num,float **score)
{
    int i;
    double mean;
    for(i=0;i<num;i++)
        mean += **(score+i);
    mean /= num;
    return mean;
}

//Calculator Standard Deviation.

double standard_deviation(int num,float *score)
{
    int i;
    double sd,mean,sum;
    mean = arithmetic_mean(num,&score);
    for(i=0;i<num;i++)
        sum += pow(*(score+i),2);
    sum /= num;
    sd = sqrt(sum-pow(mean,2));
    return sd;
}

//Calculator Square Root.

double square_root(double number)
{
    double upper,lower,summation;
    lower = 0;
	upper = number;
	summation = (lower+upper)/2;
	while(fabs(summation*summation-number)>0.000001){
		if((summation*summation)>number)
			upper = summation;
		else
			lower = summation;
		summation = (lower+upper)/2;
	}
    return summation;
}

//Calculator Fibonacci.

long long fibonacci(long long number)
{
	if(number==0)
		return 0;
	else if(number==1)
		return 1;
	else
		return fibonacci(number-1)+fibonacci(number-2);
}

//Calculator Factorial.

long long factorial(long long number)
{
	if(number==0)
		return 1;
	else
		return number*factorial(number-1);
}

            /* PHYSICAL */

//Calculator Gravity.

double gravity(float mass,float radius)
{
    return G*mass/pow(radius,2);
}

//Calculator Year light.

double light_year(long year)
{
    return (C*year*(DAY*HOUR*MINUTE*SECOND))/1609.344;
}


////CONVERTERS OTHERS.

            /* ANGLE */

//Converters Degrees to Radians.

double deg_to_rad(double degree)
{
    return degree*(PI/180);
}

//Converters Radians to Degrees.

double rad_to_deg(double radian)
{
    return radian*57.29578;
}

//Converters Gradians to Radians.

double grad_to_rad(double gradian)
{
    return gradian*0.015708;
}

            /* LENGTH */

//Converters Kilometers to Miles.

double kilo_to_mile(double kilometer)
{
    return kilometer*0.621371;
}

//Converters Miles to Kilometers.

double mile_to_kilo(double mile)
{
    return mile*1.609344;
}

//Converters Centimeters to Inches.

double centi_to_inche(double centimeter)
{
    return centimeter*0.393701;
}

//Converters Centimeters to Feet.

double centi_to_feet(double centimeter)
{
    return centimeter*0.032808;
}

//Converters Centimeters to Yards.

double centi_to_yard(double centimeter)
{
    return centimeter*0.010936;
}

            /* WEIGHT AND MASS */

//Converters Kilograms to Pounds.

double kilo_to_pound(double kilogram)
{
    return kilogram*2.204623;
}

            /* TEMPERATURE */

//Converters Kelvins to Degree Celsius.

double kelvin_to_celsius(double kelvin)
{
    return kelvin-273.15;
}

//Converters Degree Fahrenheit to Degree Celsius.

double fahrenheit_to_celsius(double fahrenheit)
{
    return (fahrenheit-32)/1.8;
}

//Converters Degree Celsius to Kelvins.

double celsius_to_kelvin(double celsius)
{
    return celsius+273.15;
}

//Converters Kelvins to Degree Fahrenheit.

double kelvin_to_fahrenheit(double kelvin)
{
    return kelvin*1.8-459.67;
    //return 1.8*kelvin_to_celsius(kelvin)+32;
}

//Converters Degree Fahrenheit to Kelvins.

double fahrenheit_to_kelvin(double fahrenheit)
{
    return (fahrenheit+459.67)/1.8;
    //return fahrenheit_to_celsius(fahrenheit)+273.15;
    //return celsius_to_kelvin(fahrenheit_to_celsius(fahrenheit));
}
