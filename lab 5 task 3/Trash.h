#pragma once

#include "Libraries.h"
#include "Product.h"
#include "Client+Card+Debit_card+Credit_card.h"

void addtional_method();
void addtional_method(Client::Credit_card& cd);
Client::Credit_card addtional_method_class(Client::Credit_card& cc);

class memory_allocation_error
{};

class Additional_Class_With_Private_Imitation : private Product
{
public:
	Additional_Class_With_Private_Imitation(string name, double price, int add1, float add2, double add3);
private:
	int add1;
	float add2;
	double add3;
};

class Additional_Class_1
{
public:
	Additional_Class_1(int add);
	~Additional_Class_1();

	int get_add()
	{
		return this->add;
	}
private:
	int add;
};

class Additional_Class_2
{
public:
	Additional_Class_2(int add);
	~Additional_Class_2();

	int get_add()
	{
		return this->add;
	}
private:
	int add;
};

class Additional_Class_3
{
public:
	Additional_Class_3(int add);
	~Additional_Class_3();

	int get_add()
	{
		return this->add;
	}
private:
	int add;
};

class Additional_Class_123 : public Additional_Class_1, public Additional_Class_2, public Additional_Class_3
{
public:
	Additional_Class_123(int add, int add1, int add2, int add3);
	~Additional_Class_123();

	using Add1 = Additional_Class_1;
	using Additional_Class_3::get_add;

	void print()
	{
		cout << Add1::get_add() << Additional_Class_2::get_add() << get_add();
	}
private:
	int add, add1, add2, add3;
};

//

class Abstract_class
{
public:
	void virtual abstract_method() = 0;

	Abstract_class()
	{
		cout << "Виклик конструктору класу \"Abstract_class\"" << endl;
	}

	virtual ~Abstract_class()
	{
		cout << "Об\'єкт класу \"Abstract_class\" був видалений" << endl << endl;
	}
};

class Derivative_from_abstract_1 : public Abstract_class
{
public:
	Derivative_from_abstract_1* try_create_object();

	Derivative_from_abstract_1()
	{
		cout << "Виклик конструктору класу \"Abstract_class 1\"" << endl;
	}

	void abstract_method()
	{
		cout << "Виклик методу об\'єкту #1 похідного від абстрактного" << endl;
	}
	virtual ~Derivative_from_abstract_1()
	{
		cout << "Об\'єкт класу \"Derivative_from_abstract_1\" був видалений" << endl;
	}
};

class Derivative_from_abstract_2 : public Abstract_class
{
public:
	Derivative_from_abstract_2* try_create_object();

	Derivative_from_abstract_2()
	{
		cout << "Виклик конструктору класу \"Abstract_class 2\"" << endl;
	}

	void abstract_method()
	{
		cout << "Виклик методу об\'єкту #2 похідного від абстрактного" << endl;
	}
	virtual ~Derivative_from_abstract_2()
	{
		cout << "Об\'єкт класу \"Derivative_from_abstract_2\" був видалений" << endl;
	}
};

class Derivative_from_abstract_3 : public Abstract_class
{
public:
	Derivative_from_abstract_3* try_create_object();

	Derivative_from_abstract_3()
	{
		cout << "Виклик конструктору класу \"Abstract_class 3\"" << endl << endl;
	}

	void abstract_method()
	{
		cout << "Виклик методу об\'єкту #3 похідного від абстрактного" << endl << endl;
	}
	virtual ~Derivative_from_abstract_3()
	{
		cout << "Об\'єкт класу \"Derivative_from_abstract_3\" був видалений" << endl;
	}
};

class Additional_class_21
{
public:
	int a;
};

//

class Derivative_from_Additional_class_21_1 : virtual public Additional_class_21
{

};

class Derivative_from_Additional_class_21_2 : virtual public Additional_class_21
{

};

class Additional_class_22 : public Derivative_from_Additional_class_21_1, public Derivative_from_Additional_class_21_2
{
public:
	void print()
	{
		cout << a;
	}
};