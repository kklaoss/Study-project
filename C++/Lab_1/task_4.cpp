#include <iostream> // ���������� ���������� ��� ������������� ������� �����-������
using namespace std; // ����������� ������������ ��� std
int main()
{
	int l = 10; // ������ ���������� l, ������� ��������� ����� �����, � ������ ������ 10
	int s = 3; // ������ ���������� s, ������� ��������� ���������� ��������� ����, �� ���� 3
	int res; // ������ ���������� res, ������� ��������� ���������� ����
	// � ������ ������, ������ ������� � ����� ����� ���� ������ ����� �� ��� ����. ����� �������, ������ ����� ������ 10 ����� ����������� ��� ������������������ �� 10 ��������, ��� ������ ������ ����� ���� a, b ��� c
	// ���������� ����� ���� ����� �����, ��������� ������� (3 ** 10), ��� ��� � ��� 3 �������� �� ������ �� 10 �������
	res = pow(s, l); // ������� pow �������� 3 � ������� 10, ����� �������� ����� ���������� ��������� ����
	cout << fixed << res; // ������� ���������� res. ���������� fixed ��� ����������� ����� � ��������� ������� � ���������������� �������������
	return 0; // ������� 0
}