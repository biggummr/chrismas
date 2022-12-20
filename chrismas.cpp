#include <stdlib.h>
#include "../../std_lib_facilities.h"

int main()
{
	cout << "Typ dyn namme yn en dernei dyn leeftiid en dernei enter: ";
	string name = "";
	int age;
	cin >> name >> age; '\n';
	'\n';
	if (name == "jeljer" && age == 20)
		cout << "Hoe ist drmee myn jong:)?\n"
		"wanneer komst wer es terug?";
	else if (name == "jeljer" && age == 21)
		cout << "Bijna jong!\n";
	else if (name == "jeljer" && age == 19)
		cout << "neen das niet joe leeftiid\n";
	else if (name == "mariam")
		cout << "Hello how are you:)?\n";
	else if (name == "germ" && age == 20)
		cout << "Hey!, dat bin ik:D.\n";
	else
		cout << "Sorry die kin ik net:(.\n";
	system("pause");
}