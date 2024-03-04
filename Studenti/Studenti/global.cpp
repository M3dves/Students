#include "student.h"

int student::cmpmate(student s1, student s2);
{
	if (s1.mate == s2.mate) return 0;
	else if (s1.mate > s2.mate) return 1;
	return -1;
}
int student::cmpist(student s1, student s2);
{
	if (s1.ist == s2.ist) return 0;
	else if (s1.ist > s2.ist) return 1;
	return -1;
}
int student::cmpeng(student s1, student s2);
{
	if (s1.eng == s2.eng) return 0;
	else if (s1.eng> s2.eng) return 1;
	return -1;
}
int student::cmpnume(student s1, student s2)
{
	return strcmp(s1.nume, s2.nume);
}