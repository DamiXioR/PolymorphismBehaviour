#include <iostream>

class Base {
public:
	virtual void hello() {
		std::cout << "Base say hello!\n";
	}

	void hello2() {
		std::cout << "Base non-virtual say hello!\n";
	}

};

class Derived : public Base {
public:
	void hello() override {
		std::cout << "Derived say hello!\n";
	}

	void hello2() {
		std::cout << "Derived non virtual say hello!\n";
	}
};

int main(){

	//call virtual
	
	Derived d;
	d.hello();
	d.hello2();
	
	Derived& dR = d;
	dR.hello();
	dR.hello2();

	Derived* dP = &d;
	dP->hello();
	dP->hello2();
	
	Base& bR = d;
	Base* bP = &d;

	bR.hello();
	bR.hello2();

	bP->hello();
	bP->hello2();

	return 0;
};
