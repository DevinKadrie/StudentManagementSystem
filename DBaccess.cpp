#include <string> 
#include <iostream>
// TODO: create a student object with ID, Name, class list, units, several other things that I dont know what

//will eventually interface with a db, but now is just a placeholder.
void insertStudent(int id, std::string name){
    std::cout << name << std::endl;
    std::cout << id << std::endl;
}

void removeStudent(int id){
    std::cout << id << std::endl; 
}

//return student here when it is made
void getStudent(int id){
    std::cout << id << std::endl;
}

int main(){
    std::string name = "Devin";
    insertStudent(1234, name);
    return 0;
}
