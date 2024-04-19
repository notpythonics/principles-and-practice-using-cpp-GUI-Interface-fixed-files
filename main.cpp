#include "Simple_window.h"
#include "Graph.h"

int main(){
	Graph_lib::Point tl{ 100,100 };

	Simple_window win{ tl, 600, 400, "ISIS" };

	Graph_lib::Polygon poly;

	poly.add(Point{ 300, 200 });
	poly.add(Point{ 350, 100 });
	poly.add(Point{ 400, 200 });

	poly.set_color(Color::dark_red);

	win.attach(poly);

	win.wait_for_button();
}