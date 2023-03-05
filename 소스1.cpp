#include<iostream>	
#include<string.h>
using namespace std;

class NoPersonException
{
private:
	int persons;
public:
	NoPersonException();
	NoPersonException(int p) { persons = p; }
	int get_persons() { return persons; }
};

int main1()
{
	int pizza_slices = 0;
	int persons = 0;
	int slices_per_person = 0;
	try
	{
		cout << "���� �������� �Է�: ";
		cin >> pizza_slices;
		cout << "������� �Է�: ";
		cin >> persons;

		if (persons <= 0) throw NoPersonException(persons);
		slices_per_person = pizza_slices / persons;
		cout << "�� ����� ���ڴ� " << slices_per_person << "�Դϴ�." << endl;
	}
	catch (NoPersonException e)
	{
		cout << "����: ��� ���� " << e.get_persons() << "�Դϴ�" << endl;
	}
	
	return 0;
}
