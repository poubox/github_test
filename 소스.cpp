#include <iostream>	
#include <vector>
#include <string.h>
using namespace std;

int main()
{
	vector<double> scores;

	while (true)
	{
		double value = 0.0;
		cout << "������ �Է�(����� -1): ";
		cin >> value;
		if (value < 0.0)break;
		scores.push_back(value);
	}

	double highest = scores[0];
	for (int i = 1; i < scores.size(); i++)
		if (scores[i] > highest)
			highest = scores[i];
	cout << "�ְ� ������ " << highest << "�Դϴ�" << endl;

	return 0;
}


