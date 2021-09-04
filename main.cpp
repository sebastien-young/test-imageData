#include "crow_all.h"

int main () {
	crow::SimpleApp app;

	CROW_ROUTE (app, "/")
		([] () { return "<div><h1>Hello!</h1></div>"; });
	
	app.port(18080).multithreaded().run();
	return 0;
}
