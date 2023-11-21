#include "Trash.h"
#include "Sub_main.h"

void addtional_method() //Додатковий метод
{
	cout << "Введіть кількість елементів у масиві: ";
	int size = check_int_corectness(1);

	int* array = new int[size];

	cout << "[ ";
	for (int i = 0; i < size; i++)
	{
		cout << (array[i] = rand() % 100);
		cout << " ";
	}
	cout << "]" << endl << endl;

	bool swapped;
	for (int i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1]) {
				swap(array[j], array[j + 1]);
				swapped = true;
			}
		}
		if (swapped == false)
		{
			break;
		}
	}

	cout << "Відсортований масив" << endl << endl;

	cout << "[ ";
	for (int i = 0; i < size; i++)
	{
		cout << array[i];
		cout << " ";
	}
	cout << "]" << endl << endl;

	delete[] array;

	return;
}

void addtional_method(Client::Debit_card& dc, Client::Credit_card& cc)
{
	//Провести певні обчислення
	cout << "Результат \"певних обчислень\": " << dc.get_money_on_card() + cc.get_credit_limit() + cc.get_credit() + cc.get_number_of_operations() << endl << endl;
}

Additional_Class_With_Private_Imitation::Additional_Class_With_Private_Imitation(string name, double price, int add1, float add2, double add3) : Product(name, price)
{
	this->add1 = add1;
	this->add2 = add2;
	this->add3 = add3;
}

Additional_Class_1::Additional_Class_1(int add)
{
	this->add = add;
	cout << "Був створений об\'єкт класу \"Additional_Class_1\"" << endl;
}

Additional_Class_1::~Additional_Class_1()
{
	cout << "Об\'єкт класу \"Additional_Class_1\" був видалений" << endl << endl;
}

Additional_Class_2::Additional_Class_2(int add)
{
	this->add = add;
	cout << "Був створений об\'єкт класу \"Additional_Class_2\"" << endl;
}

Additional_Class_2::~Additional_Class_2()
{
	cout << "Об\'єкт класу \"Additional_Class_2\" був видалений" << endl;
}

Additional_Class_3::Additional_Class_3(int add)
{
	this->add = add;
	cout << "Був створений об\'єкт класу \"Additional_Class_3\"" << endl;
}

Additional_Class_3::~Additional_Class_3()
{
	cout << "Об\'єкт класу \"Additional_Class_3\" був видалений" << endl;
}

Additional_Class_123::Additional_Class_123(int add, int add1, int add2, int add3) : Additional_Class_1(add1), Additional_Class_2(add2), Additional_Class_3(add3)
{
	this->add = add;
	this->add1 = add1;
	this->add2 = add2;
	this->add3 = add3;
	cout << "Був створений об\'єкт класу \"Additional_Class_123\"" << endl << endl;
}

Additional_Class_123::~Additional_Class_123()
{
	cout << "Об\'єкт класу \"Additional_Class_123\" був видалений" << endl;
}



Derivative_from_abstract_1* Derivative_from_abstract_1::try_create_object()
{
	try
	{
		Derivative_from_abstract_1* temp = nullptr;
		temp = new Derivative_from_abstract_1;
		return temp;
	}
	catch (bad_alloc& e)
	{
		cerr << "Помилка" << endl;
		exit(-1);
	}
}

Derivative_from_abstract_2* Derivative_from_abstract_2::try_create_object()
{
	try
	{
		Derivative_from_abstract_2* temp = nullptr;
		temp = new Derivative_from_abstract_2;
		return temp;
	}
	catch (bad_alloc& e)
	{
		cerr << "Помилка" << endl;
		exit(-1);
	}
}

Derivative_from_abstract_3* Derivative_from_abstract_3::try_create_object()
{
	try
	{
		Derivative_from_abstract_3* temp = nullptr;
		temp = new Derivative_from_abstract_3;
		return temp;
	}
	catch (bad_alloc& e)
	{
		cerr << "Помилка" << endl;
		exit(-1);
	}
}

Client::Credit_card addtional_method_class(Client::Credit_card& cc)
{
	cout << "Результат \"певних обчислень\": " << cc.get_credit_limit() + cc.get_credit() + cc.get_number_of_operations() << endl << endl;
	return cc;
}