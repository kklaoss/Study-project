#include <iostream> // ���������� ���������� ��� ������������� ������� �����-������
using namespace std; // ����������� ������������ ��� std
void f2_9(float A, float B, float C, float D)
{
	float a = A; // ������������� ���������� a ��������� A
	if (B > a) { a = B; } // ���� B ������ �������� �������� a, ��������� a �� �������� B
	if (C > a) { a = C; } // ���� C ������ �������� �������� a, ��������� a �� �������� C
	if (D > a) { a = D; } // ���� D ������ �������� �������� a, ��������� a �� �������� D
	cout << " " << endl; // �������� ������ ������ ��� ���������� ������
	cout << "A / greatest number = " << A / a << endl; // ������� ��������� ������� A �� ���������� �����
	cout << "B / greatest number = " << B / a << endl; // ������� ��������� ������� B �� ���������� �����
	cout << "C / greatest number = " << C / a << endl; // ������� ��������� ������� C �� ���������� �����
	cout << "D / greatest number = " << D / a; // ������� ��������� ������� D �� ���������� �����
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
	case 29: f2_9(a, b, c, d); break; // ���� ����� ����� 29, ���������� ������� f2_9 � ����������� a, b, c, d
	default: cout << "The task was not found";
		// ���� ����� �����, ������� �� ������������� �� ����� ������, ��������� ��������� �� ������
	}
	return 0; // ������� 0
}