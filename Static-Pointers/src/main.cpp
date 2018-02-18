#include <foo.h>

#include <iostream>



int main(void)
{
	//Creates new pointer to instance of class Foo
	Foo* pFoo;

	//Create new Foo instnce and allocate in pFoo
	pFoo = new Foo(35);

	//Prints static member of classs Foo
	std::cout << "Static member is : " << pFoo->sPi << std::endl;

	//Prints age member of instance Foo
	pFoo->printAge();

	//Destroy instance of Foo
	pFoo->~Foo();

	//Tries to print static member after destroyed
	std::cout << "Static member is : " << pFoo->sPi << std::endl;

	//Prints age member of instance Foo after destroyed
	pFoo->printAge();

	//Deallocating memory
	std::cout << "Deallocating memory!" << std::endl;
	delete pFoo;




	//Next step of testing
	std::cout << std::endl << std::endl;

	//Create new instance of Foo
	Foo myFoo(35);

	//Print its static member sPi
	std::cout << "Its static member is : " << myFoo.sPi << std::endl;

	//Print its member variable age
	myFoo.printAge();

	//Detroy him
	myFoo.~Foo();

	//Repeat
	//Print its static member sPi
	std::cout << "Its static member is : " << myFoo.sPi << std::endl;

	//Print its member variable age
	myFoo.printAge();

	system("PAUSE > NULL");
	return 0;
}

//CONCLUSION 
/* We create a new instance of class Foo and allocate it on the pointer pFoo
   after that we print the class static member named sPi
   then we print the member variable named m_age using class function
   then we destroy the instance and repeat, I think since we havent change the data
   even if the memory is 'free' now, the data is still there so we can use it.
   Lets try the same without a pointer.
*/
