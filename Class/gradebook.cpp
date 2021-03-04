#include "gradeBook.h"
#include <iostream>
using namespace std;

//Constructor ile gradeBook nesnemiz kurulurken argumanlarimizi yolladik
gradeBook::gradeBook(string name, string teacherName) : courseName(name), teacherName(teacherName) {};

//Kursun ismini degistirebilmek icin set fonksiyonu tanimladik.
void gradeBook::setCourseName(string name) {
	courseName = name;
}

//Kursun ismini alabilmek icin get fonksiyonumuzu tanimladik 
string gradeBook::getCourseName() const {
	return courseName;
}

//Ogretmenin ismini degistirebilmek icin set fonksiyonu tanimladik.
void gradeBook::setTeacherName(string name) {
	teacherName = name;
}

//Ogretmen ismini alabilmek icin get fonksiyonumuzu tanimladik 
string gradeBook::getTeacherName() const {
	return teacherName;
}

//Aldigimiz kurs ve ogretmen ismini ekrana yazdirdik
void gradeBook::displayMessage()const {
	cout << "Welcome to the grade book: " << getCourseName() << "!" << endl
		<< "This course name is presented by: " << getTeacherName() << endl;
}

