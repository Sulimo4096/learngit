base: base.cpp
	g++ base.cpp -o base `pkg-config --cflags --libs gtkmm-3.0`
