#include <iostream>
#include "fndraw.h"

using namespace std;

int main(int argc,char** argv)
{

//Page width and height 
double pw=100.0,ph=100.0;
cout<<"\nEnter page width : ";		cin>>pw;
cout<<"\nEnter page height : ";		cin>>ph;

//center coords
static const int x0=pw/2,y0=ph/2;

//Input File Name
string fileName;
cout <<"\nEnter name of file : ";
cin>>fileName;

//Surface creation
string fileNameEx = fileName + ".svg";
const char * cstr  = fileNameEx.c_str();

cairo_t *cr;
cairo_surface_t *surface = cairo_svg_surface_create(cstr, pw, ph);
cr = cairo_create(surface);

LcCairoPainter lcpainter(surface,cr);

//drawing 

fndraw(lcpainter,cstr,x0,y0);
return 0;
}
