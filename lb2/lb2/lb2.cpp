#include <iostream>
#include <string>
using namespace std;

class bank_number
{
private:
	string name, lastname, date, investment_sum;

public:

	string get_date()
	{
		return date;
	}

	bank_number()
	{
		name = "-";
		lastname = "-";
		date = "-";
		investment_sum = "-";

	}
	bank_number(string name, string lastname, string date, string investment_sum)
	{
		this->name = name;
		this->lastname = lastname;
		this->date = date;
		this->investment_sum = investment_sum;
	}
	void print_f_list()
	{
		cout << "Name : " << name << endl << "Lastname : " << lastname << endl << "Date: " << date << endl << "Investment_sum: " << investment_sum << endl;
	}

	~bank_number() {}
	
};

class bank_number_1 : public bank_number
{
public:
	bool valid_name;
	string num_country;
	bank_number_1(string name, string lastname, string date, string investment_sum)
	{
		name = "-";
		lastname = "-";
		date = "-";
		investment_sum = "-";
		valid_name = false;
		num_country = "-";
	}

	bank_number_1(string name, string lastname, string date, string investment_sum, string num_country) : bank_number(name, lastname, date, investment_sum)
	{
		this->valid_name = valid_name;
		this->num_country = num_country;
	}

	~bank_number_1() {}
	
	void print_s_list()
	{
		print_f_list();
		if (valid_name)
		{
			cout << "This valid number.";
		}
		else { cout << "This invalid number."; }
		cout << "County: " << num_country << endl;
	}
	void cheak_vaild(string date)
	{
		if (date.length() == 10) { valid_name = true; }
		else { valid_name = false; }
	}
};

void main()
{
	setlocale(LC_ALL, "ru");
	bank_number_1 Andrey("Vlad", "Guliak", "30.2.2021", "3655 UAH", "UA");
	Andrey.print_s_list();

	const int size = 3;
	string search_type;
	cout << "search by date last operation: ";
	cin >> search_type;

	bank_number* arr = new bank_number[size];

	bank_number f_num("Ilya", "Domnikov", "30.11.2021", "4125.5 UAH");
	bank_number s_num("Fedor", "Parhomenko", "22.8.2021", "225 UAH");
	bank_number t_num("Georgy", "Chipupa", "14.4.2021", "613.7 UAH");

	arr[0] = f_num;
	arr[1] = s_num;
	arr[2] = t_num;

	cout << endl;
	for (int i = 0; i < size; i++)
	{
		if (arr[i].get_date() == search_type)
		{
			arr[i].print_f_list();
			cout << endl;
		}
	}
	cout << "This all number which in database!" << endl;
	delete[] arr;
}