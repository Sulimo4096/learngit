#include <gtkmm.h>

int main(int argc, char * argv[])
{
	Glib::RefPtr<Gtk::Application> app=Gtk::Application::create(argc,argv,"base");
	Gtk::Window window;
	window.set_default_size(200,200);
	return app->run(window);
}
