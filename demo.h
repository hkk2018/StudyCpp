#pragma once

class Demo {
public:
	Demo();
	Demo(int);
	void set_a(int);
	void set_b(int);
	int get_a();
	int get_b();
	int do_something();
private:
	int a;
	int b;
};