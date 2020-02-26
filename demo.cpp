#include "demo.h"

Demo::Demo() {
	set_a(1);
	set_b(1);
}
// 把计篶ㄧ计
Demo::Demo(int n1) {
    set_a(n1);
    set_b(n1);
}
int Demo::do_something() {
    // эΘ㊣ getter Θㄧ计
    return get_a() + get_b();
}

// setter 籔 getter Θㄧ计
void Demo::set_a(int n) {
    a = n;
}

void Demo::set_b(int n) {
    b = n;
}

int Demo::get_a() {
    return a;
}

int Demo::get_b() {
    return b;
}
