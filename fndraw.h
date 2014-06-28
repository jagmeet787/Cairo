#ifndef FNDRAW_H
#define FNDRAW_H

#include <cmath>
#include <cairo/cairo-pdf.h>
#include <cairo/cairo-ps.h>
#include <cairo/cairo-svg.h>

#include "lccairopainter.h"

void fndraw(LcCairoPainter lcpainter, const char* cstr, int x0, int y0){
lcpainter.line_width(.2);
lcpainter.circle(x0,y0,5);	
lcpainter.stroke();
lcpainter.rectangle(x0-10,y0-5,20,10);
lcpainter.stroke();
lcpainter.move_to(x0,y0+5);
lcpainter.line_to(x0,y0-5);
lcpainter.stroke();
lcpainter.move_to(x0-5,y0);
lcpainter.line_to(x0+5,y0);
lcpainter.stroke();
lcpainter.ellipse(x0,y0,5,3,0*(M_PI/180.0),360*(M_PI/180.0),90*(M_PI/180.0));
lcpainter.stroke();
lcpainter.ellipse(x0,y0,10,5,0*(M_PI/180.0),360*(M_PI/180.0),0*(M_PI/180.0));
lcpainter.stroke();
lcpainter.arc(x0,y0-5,10,180*(M_PI/180.0),0*(M_PI/180.0));
lcpainter.stroke();

//lcpainter.text(x0,y0,cstr,0,10);
const char* val=cstr;
lcpainter.text(x0,-y0,val,0,1);
lcpainter.stroke();

}

#endif // FNDRAW_H
