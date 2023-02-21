#include <string>
#include <iostream>

using namespace std;

class Human
{

private:
	string nik;
	string name;
	string gender;

public:
	Human()
	{
		this->nik = "";
		this->name = "";
		this->gender = "";
	}

	// getter dan setter
	void setNik(string nik)
	{
		this->nik = nik;
	}

	string getNik()
	{
		return this->nik;
	}

	void setName(string name)
	{
		this->name = name;
	}

	string getName()
	{
		return this->name;
	}

	void setGender(string gender)
	{
		this->gender = gender;
	}

	string getGender()
	{
		return this->gender;
	}

	~Human() 
	{
	}
};