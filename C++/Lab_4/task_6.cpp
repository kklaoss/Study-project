#include <iostream> // ���������� ���������� ��� ������������� ������� �����-������
using namespace std; // ����������� ������������ ��� std
bool symmetric(int num)
{
	int orig = num; // ��������� ������������ ����� ��� ������������ ���������
	int rev = 0; // �������������� ���������� ��� �������� ������������� �����
	while (num > 0) // ���� ������������, ���� ����� ������ 0
	{
		rev = rev * 10 + num % 10; // ��������� ��������� ����� num � rev
		num /= 10; // ������� ��������� ����� �� num
	}
	return orig == rev; // ���������, ����� �� ������������ ����� �������������
}
void f4_22()
{
	int n; // ��������� ���������� ��� �������� ���������� �������� �����
	cout << "Enter the number of numbers: "; // ����������� � ������������ ����
	cin >> n; // ��������� ���������� �������� ����� �� ������������
	int maxs = 0, maxns = 0; // �������������� �������� ��� ������������ ������������������� ������������ � �������������� �����
	int cs = 0, cns = 0; // �������������� �������� ��� ������� ������������ � �������������� �������������������
	for (int i = 0; i < n; ++i) // ���� �� ���������� �������� �����
	{
		int num; // ��������� ���������� ��� �������� �������� �����
		cout << "Enter a number " << (i + 1) << ": "; // ����������� � ������������ ������ �����
		cin >> num; // ��������� ����� �� ������������
		if (symmetric(num)) // ���������, �������� �� ������� ����� ������������
		{
			cs++; // ����������� ������� ������������ �����
			maxs = max(maxs, cs); // ��������� ������������ ���������� ������������ �����, ���� ������� ������
			cns = 0; // ���������� ������� �������������� �����, ��� ��� �� ����� ������������ �����
		}
		else // ���� ����� �� ������������
		{
			cns++; // ����������� ������� �������������� �����
			maxns = max(maxns, cns); // ��������� ������������ ���������� �������������� �����, ���� ������� ������
			cs = 0; // ���������� ������� ������������ �����, ��� ��� �� ����� �������������� �����
		}
	}
	cout << "\nThe maximum number of symmetric numbers in a row: " << maxs << endl;
	// ������� ������������ ���������� ������������ �����
	cout << "\nThe maximum number of non-symmetric numbers in a row: " << maxns << endl;
	// ������� ������������ ���������� �������������� �����
}
int main() // ������ �������� ������� ���������
{
	float a, b, c, d; // ���������� ���������� ��� �������� ��������
	cout << "Enter the variables:" << endl << " " << endl;  // ����� ��������� ��� ������������
	cout << "Variable 1 - "; cin >> a; // ������ ����� ������ ����������
	cout << "Variable 2 - "; cin >> b; // ������ ����� ������ ����������
	cout << "Variable 3 - "; cin >> c; // ������ ����� ������� ����������
	cout << "Variable 4 - "; cin >> d; // ������ ����� ��������� ����������
	int nomer; // ���������� ���������� ��� �������� ������ ������
	cout << " " << endl << "Specify the task number: "; cin >> nomer; // ������ ����� ������ ������ �� ������������
	switch (nomer) // ������������� ��������� switch ��� ������ ������ �� ������
	{
	case 422: f4_22(); break; // ���� ����� ����� 422, ���������� ������� f4_22 ��� ����������
	default: cout << "The task was not found";
		// ���� ����� �����, ������� �� ������������� �� ����� ������, ��������� ��������� �� ������
	}
	return 0; // ������� 0
}