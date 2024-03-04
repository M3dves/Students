#include <iostream>
#include <cstring>
class student {
 private:
	char nume[250];
   float mate, eng, ist, medie;
public:
	 void setnume(char s[]);
	 char getnume();
	void setmate(float x);
	float  getmate();
	void seteng(float x);
	float geteng();
	void getist();
	float setist(float x);
	float retMedie();
	int cmpmate(student s1,student s2);
	int cmpeng(student s1, student s2);
	int cmpist(student s1, student s2);
	int cmpnume(student s1, student s2);
	int cmpmedie(student s1, student s2);

};