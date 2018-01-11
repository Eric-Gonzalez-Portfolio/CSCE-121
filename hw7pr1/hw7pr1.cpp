//Eric E. Gonzalez
//CSCE 121-502
//Due: October 26, 2014
//hw7pr1.cpp

#include "std_lib_facilities_4.h"
#include "Simple_window.h"
#include "Graph.h"

int main()
try {
  if(H112 != 201401L)error("Error: incorrect std_lib_facilities_4.h version ",
		  	   H112);
  Simple_window win1(Point(100,200),600,400,"Initials");
  
  //Set lines for first initial
  Lines E1;
  E1.set_style(Line_style(Line_style::solid, 5));
  E1.add(Point(100,50),Point(100,200));
  E1.add(Point(100,50),Point(150,50));
  E1.add(Point(100,125),Point(150,125));
  E1.add(Point(100,200),Point(150,200));
  
  //Set lines for second initial
  Lines E2;
  E2.set_style(Line_style(Line_style::solid, 5));
  E2.add(Point(200,50),Point(200,200));
  E2.add(Point(200,50),Point(250,50));
  E2.add(Point(200,125),Point(250,125));
  E2.add(Point(200,200),Point(250,200));
  
  //Set lines for third initial
  Lines G;
  G.set_style(Line_style(Line_style::solid, 5));
  G.add(Point(300,50),Point(300,200));  
  G.add(Point(300,50),Point(400,50));     
  G.add(Point(400,50),Point(400,75)); 
  G.add(Point(300,200),Point(400,200)); 
  G.add(Point(400,200),Point(400,150));
  G.add(Point(375,150),Point(425,150));
  
  //Draw and set colors
  win1.attach(E1);
  win1.attach(E2);
  win1.attach(G);
  E1.set_color(Color::magenta);
  E2.set_color(Color::blue);
  G.set_color(Color::green);
  
  win1.wait_for_button();
  return 0;
}
catch(exception& e) {
	cerr << "exception: " << e.what() << '\n';
	return 1;
}
catch (...) {
	cerr << "Some exception\n";
	return 2;
}
