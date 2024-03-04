#include "student.h"
void student::setnume(char s[])
{
	strcpy(nume, s);

}
char student::getnume()
{
	return nume;
}
void student::setmate(float x)
{
	mate = x;
}
float student::getmate(float x)
{
	return mate;
}
void student::seteng(float x)
{
	eng = x;
}
float student::geteng()
{
	return eng;
}
void student::setist(int x)
{
	ist = x;
}
float student::getist()
{
	return ist;
}
float retMedie()
{
	return (geteng + getmate + getist) / 3;
}