#include "demo.h"

Demo::Demo() {
	set_a(1);
	set_b(1);
}
// �@�ӰѼƪ��غc���
Demo::Demo(int n1) {
    set_a(n1);
    set_b(n1);
}
int Demo::do_something() {
    // �令�I�s getter �������
    return get_a() + get_b();
}

// setter �P getter �������
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
