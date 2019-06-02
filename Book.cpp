#include "Book.h"
#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
istream& operator>> (istream& in, Book& b) {
	cout << "name :"; cin >> b.name; cout << endl;
	cout << "author :"; cin >> b.author; cout<< endl;
	cout << "publish year :"; cin >> b.PY; cout << endl;
	cout << "number of versions :"; cin >> b.NOV; cout << endl;
	return in;

};

ostream& operator<< (ostream& out, Book b) {
	cout << "name :" << b.name << endl;
	cout << "author :" << b.author << endl;
	cout << "publish year :" << b.PY << endl;
	cout << "number of versions :" << b.NOV << endl;
	return out;
};

void Book :: addbook()
{
	cout << "enter the number of books you want to add:";
	int nob;
	cin >> nob;
	Book b;
	for (int i = 0; i < nob; i++) {
		cin >> b;
		BD.push_back(b);
	}
}

void Book::listbooks()
{
	sort(BD.begin(), BD.end(), [](const Book& lhs, const Book& rhs) {
		return lhs.name < rhs.name;
	});

	for (int i = 0; i < BD.size(); i++) {
		cout << BD[i]<<endl;
	}
}

bool Book::searchbyname()
{
	string sname;
	cout << "enter the name of the book you want to find : ";
	cin >> sname;
	for (int i = 0; i < BD.size(); i++) {
		if (sname == BD[i].name) {
			cout<<BD[i]<<endl;
			return true;
		}
	}
	cout << "no book has such name" << endl;
	return false;
}

bool Book::searchbyauthor()
{
	string sauthor;
	cout << "enter the name of the author whose book you want to find : ";
	cin >> sauthor;
	for (int i = 0; i < BD.size(); i++) {
		if (sauthor == BD[i].author) {
			cout << BD[i] << endl;
			return true;
		}
	}
	cout << "no book has an author that goes by that name" << endl;
	return false;
}

bool Book::updateNOV()
{
	string sname;
	int newNOV;
	cout << "enter the name of the book whose number of versions you want to update : ";
	cin >> sname;
	for (int i = 0; i < BD.size(); i++) {
		if (sname == BD[i].name) {
			cout << "enter the new number of versions :";
			cin >> newNOV;
			BD[i].NOV = newNOV;
			return true;
		}
	}
	cout << "no book has such name so no book can be updated" << endl;
	return false;
}

void Book::highestNOV()
{ 
	cout << "The Book/s with the highest number of versions is/are :" << endl;
	int hNOV=0;
	for (int i = 0; i < BD.size(); i++) {
		if (hNOV < BD[i].NOV) {
			hNOV = BD[i].NOV;
		}
	}
	for (int i = 0; i < BD.size(); i++) {
		if (hNOV == BD[i].NOV) {
			cout << BD[i] << endl;
		}
	}

};

