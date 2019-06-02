#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Book
{
public:
	string name, author;
	int PY, NOV;
	Book()
	{
		name, author = "";
		PY, NOV = 0;
	};
	friend istream& operator>> (istream& in, Book& b);
	friend ostream& operator<< (ostream& out, Book b);
	void addbook();
	void listbooks();
	bool searchbyname();
	bool searchbyauthor();
	bool updateNOV();
	void highestNOV();

private:
	vector<Book> BD;
};

