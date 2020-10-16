#include <string>
class Course{
    int id;
    std::string name;
    int units;
    std::string professor;
    public:
        Course(int ID, std::string Name, int Units, std::string Professor){
            id = ID;
            name = Name;
            units = Units;
            professor = Professor;
        }
        int getId(){
            return id;
        }
        std::string getName(){
            return name;
        }
        int getUnits(){
            return units;
        }
        std::string getProfessor(){
            return professor;
        }
        
};