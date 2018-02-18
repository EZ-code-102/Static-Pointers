#pragma once



class Foo
{
public:
	Foo(unsigned short age);
	~Foo();

	void printAge();;

	static float sPi;

private:
	unsigned short m_age;

};
