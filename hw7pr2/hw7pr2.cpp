//Eric E. Gonzalez
//CSCE 121-502
//Due: October 26, 2014
//hw7pr2.cpp

#include "std_lib_facilities_4.h"
#include "Simple_window.h"
#include "Graph.h"

int main()
try {
  if(H112 != 201401L)error("Error: incorrect std_lib_facilities_4.h version ",
		  	   H112);
  Simple_window win1(Point(100,200),1200,800,"House");
  
  //Define shapes
  Rectangle winleft {Point{400,350}, 100, 100};		//left window
  Rectangle winright {Point{700,350}, 100, 100};	//right window
  Rectangle door {Point{550,550}, 100, 150}; 		//door
  Circle knob {Point{625,620},10};					//door knob
  Rectangle chimney {Point{700,100}, 50, 140}; 		//chimney
  Rectangle body {Point{300,300}, 600, 400}; 		//body of house
  Polygon roof;										//roof
  roof.add(Point{300,300});
  roof.add(Point{600,150});
  roof.add(Point{900,300});
  //Smoke lines
  Lines smoke1;
  smoke1.set_style(Line_style(Line_style::solid, 5));
  smoke1.add(Point(705,95),Point(710,90));
  smoke1.add(Point(710,90),Point(705,85));
  smoke1.add(Point(705,85),Point(710,80));
  smoke1.add(Point(710,80),Point(705,75));
  Lines smoke2;
  smoke2.set_style(Line_style(Line_style::solid, 5));
  smoke2.add(Point(720,95),Point(725,90));
  smoke2.add(Point(725,90),Point(720,85));
  smoke2.add(Point(720,85),Point(725,80));
  smoke2.add(Point(725,80),Point(720,75));
  Lines smoke3;
  smoke3.set_style(Line_style(Line_style::solid, 5));
  smoke3.add(Point(735,95),Point(740,90));
  smoke3.add(Point(740,90),Point(735,85));
  smoke3.add(Point(735,85),Point(740,80));
  smoke3.add(Point(740,80),Point(735,75));
  
  //Draw shapes
  win1.attach(chimney);
  win1.attach(body);
  win1.attach(roof);
  win1.attach(door);
  win1.attach(knob);
  win1.attach(winleft);
  win1.attach(winright);
  win1.attach(smoke1);
  win1.attach(smoke2);
  win1.attach(smoke3);
  
  //Set color fills for picture
  body.set_fill_color(Color::red);
  winleft.set_fill_color(Color::white);
  winright.set_fill_color(Color::white);
  chimney.set_fill_color(Color::black);
  roof.set_fill_color(Color::blue);
  door.set_fill_color(Color::green);
  knob.set_fill_color(Color::yellow);
  
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
