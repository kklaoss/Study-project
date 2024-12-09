#include <iostream> // ����������� ���������� ��� �����-������
using namespace std; // ������������� ������������ ���� std
struct Book // ����������� ��������� Book
{
	char Author[100]; // ����� �����
	char Title[100];  // �������� �����
	char Publisher[100]; // ������������
	int Year; // ��� �������
	double Price; // ���� �����
};
bool check_k(const char Publisher[100]) // ������� ��� �������� ������� ����� '�' � �������� ������������
{
	for (int i = 0; Publisher[i] != '\0'; ++i) // ������� ���� �������� � ������ Publisher
	{
		if (Publisher[i] == '�')
		{
			return true; // ���� ������� ����� '�', ���������� true
		}
	}
	return false; // ���� ����� '�' �� �������, ���������� false
}
int �omparison_strings(const char str1[100], const char str2[100]) // ������� ��� ��������� ���� �����
{
	int i = 0; // ������ ��� �������� ��������
	while (str1[i] != '\0' && str2[i] != '\0') // ������� �������� �� ����� ����� �� �����
	{
		if (str1[i] != str2[i])
		{
			return str1[i] - str2[i]; // ���� ������� �� �����, ���������� �������
		}
		i++; // ������� � ���������� �������
	}
	return str1[i] - str2[i]; // ���������� ������� ��������� ��������
}
bool �omparison_title(Book a, Book b) // ������� ��� ��������� �������� ����
{
	return �omparison_strings(a.Title, b.Title) < 0; // ���������� ��������� ��������� �������� ����
}
void sort_books(Book books[10], int count) // ������� ��� ���������� ������� ���� �� ��������
{
	for (int i = 0; i < count - 1; ++i) // ������� ���� ��� �������� ���� ����
	{
		for (int j = 0; j < count - i - 1; ++j) // ���������� ���� ��� ��������� � ������ ����
		{
			if (�omparison_title(books[j + 1], books[j])) // ���� ������� ����� ������ ���� ����� ���������, ������ �� �������
			{
				Book temp = books[j]; // ��������� ���������� ��� �������� �������� ��������
				books[j] = books[j + 1]; // ������ ������� ������� �� ���������
				books[j + 1] = temp; // ������ ��������� ������� �� ���������
			}
		}
	}
}
int main() // ������� ��� ���������� ������ �4
{
	setlocale(LC_ALL, "RUS"); // ��������� ������ ��� ����������� ����������� ������� ��������
	Book books[10] = // ������������� ������� ����
	{
		{"����� �������", "����� ������ � ����������� ������", "������", 2002, 50},
		{"��� �������", "����� � ���", "���", 1867, 70},
		{"������ ������", "1984", "�����", 2018, 45},
		{"Ը��� �����������", "������������ � ���������", "������", 1866, 60},
		{"������ ��", "����� ������������", "���", 2017, 35},
		{"������ ���������", "������ � ����", "�����", 2016, 30},
		{"�������� �������", "�������� ������", "������", 2012, 80},
		{"���� ������� ���� ������", "��������� �����", "���", 2014, 120},
		{"������ �� ����-��������", "��������� �����", "������", 2013, 25},
		{"����� ������", "�������� � ��������� ���������", "�����", 2019, 40}
	};
	Book filtered_books[10]; // ������ ��� �������� ��������������� ����
	int count = 0; // ������� ��������������� ����
	for (int i = 0; i < 10; ++i) // ������� ���� ���� ��� ����������
	{
		if (check_k(books[i].Publisher))
		{
			filtered_books[count++] = books[i]; // ���� � �������� ������������ ���� ����� '�', ��������� ����� � ��������������� ������
		}
	}
	sort_books(filtered_books, count); // ���������� ��������������� ���� �� ��������
	cout << "��������������� ������ ���� � ������ '�' � �������� ������������:\n\n"; // ����� ��������� ��� ��������������� ����
	for (int i = 0; i < count; ++i) { // ���� ��� ������ ���������� �� ��������������� ������
		cout << "����� " << i + 1 << ": "; // ����� ������ �����
		cout << "�����: " << filtered_books[i].Author << ", ��������: " << filtered_books[i].Title; // ����� ������ � �������� ������� �����
		cout << ", ������������: " << filtered_books[i].Publisher << ", ���: " << filtered_books[i].Year; // ����� ������������ � ���� ������� ������� �����
		cout << ", ���������: " << filtered_books[i].Price << "$\n"; // ����� ��������� ������� �����
	}
	return 0; // ������� 0, ����������� �� �������� ���������� ���������
}