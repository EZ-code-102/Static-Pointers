#pragma once
#include <foo.h>
#include <iostream>

float Foo::sPi = 3.141592f;

Foo::Foo(unsigned short age)
{
	m_age = age;
	std::cout << "Yay! You created a new Foo!" << std::endl;
	std::cout << "It´s age is : " << m_age << std::endl;
}

Foo::~Foo()
{
	std::cout << "Ohh no! " << "At the age of " << m_age << " your Foo was killed!" << std::endl;
}

void Foo::printAge()
{
	std::cout << "His age right now is : " << m_age << std::endl;
}