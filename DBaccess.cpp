#include <string> 
#include <iostream>
#include "student.cpp" 
// TODO: create a student object with ID, Name, class list, units, several other things that I dont know what
// TODO: create a class struct with unit number, id, professor, time,  
//will eventually interface with a db, but now is just a placeholder.
void insertStudent(Student student){
    std::cout << student.getName() << std::endl;
    std::cout << student.getId() << std::endl;
}

void removeStudent(int id){
    std::cout << id << std::endl; 
}

//return student here when it is made
void getStudent(int id){
    std::cout << id << std::endl;
}

int main(){
    Student devin = Student(1234, "Devin Kadrie", 180, std::vector<Course>(), "Computer Science");
    insertStudent(devin);
    return 0;
}
