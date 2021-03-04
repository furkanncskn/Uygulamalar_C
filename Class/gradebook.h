#pragma once
#include <string>

//gradeBook nesnemizin uye fonksiyonlarini(member functions) ve uye degiskenlerini(member variables) belirledik.
class gradeBook {
public:
	explicit gradeBook(std::string, std::string);
	void setCourseName(std::string);
	std::string getCourseName() const;
	void setTeacherName(std::string);
	std::string getTeacherName() const;
	void displayMessage() const;
private:
	std::string courseName;
	std::string teacherName;
};