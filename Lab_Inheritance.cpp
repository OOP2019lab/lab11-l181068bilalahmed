#include "Person_l181068.h"
#include "UnderGraduate_l181068h.h"
#include "Faculty_l181068.h"

int main(){
	Student s1 (3.91, "Ted", "Thompson", 22);
	Faculty f1(2, 420, "Richard", "Karp", 45);
	cout << endl;
	s1.Person :: printInformation();
	s1.printStudent();
	f1.printFaculty();
	cout << endl;
	system("pause");
	return 0;
}