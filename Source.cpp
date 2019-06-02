#include<iostream>
#include<string>
#include<vector>
#include "Book.h"
using namespace std;

int main()
{
	int C;
	Book b;
start:
	cout << "Welcome to the FCAI-library, Please choose what you want to do \n 1-Add new books to the library \n 2-list all books in the library \n 3- find a book by it's name \n 4- find a book by it's author \n 5- update a books number of versions \n 6- find the books with the highest number of versions in the library \n 0-exit \n";
	cin >> C;
	if (C == 1) {
		b.addbook();
		goto start;
	}
	else if (C == 2) {
		b.listbooks();
		goto start;
	}
	if (C == 3) {
		b.searchbyname();
		goto start;
	}
	else if (C == 4) {
		b.searchbyauthor();
		goto start;
	}
	else	if (C == 5) {
		b.updateNOV();
		goto start;
	}
	else if (C == 6) {
		b.highestNOV();
		goto start;
	}
	else if (C == 0) {
		exit;
	}
}