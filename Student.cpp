#include <string>
#include <vector>
#include <iostream>
#include "course.cpp"
class Student{
    int id;
    std::string name;
    int numUnits;
    std::string major;
    std::vector<Course> courseList;
    public:
        Student(int ID, std::string Name, int NumUnits, std::vector<Course> CourseList, std::string Major){
            id = ID;
            name = Name;
            numUnits = NumUnits;
            courseList = CourseList;
            major = Major;
        }

        //adds to the unit total a number of units equal to units
        void addUnits(int units){
            numUnits += units;
        }

        //changes unit total to be equal to totalUnits
        void setUnitTotal(int totalUnits){
            numUnits = totalUnits;
        }

        //adds classes to classList with a vector
        void addCourse(Course addedCourse){
            for(int i = 0; i < courseList.size(); i++){
                if(courseList[i].getId() == addedCourse.getId()){
                    //create error and replace with a raise
                    std::cout << "Class already added" << std::endl;
                }
                else{
                    courseList.push_back(addedCourse);
                    std::cout << "Course added successfully" << std::endl;
                }
            }
            
        }
        
        void removeCourse(int id){
            int removedIndex;
            try{
                for(int i = 0; i < courseList.size(); i++){
                    //ERROR will be fixed when class struct is created
                    if(courseList[i].getId() == id){
                        removedIndex = i;
                        break;
                    }
                }
                courseList.erase(courseList.begin() + removedIndex);
            }
            catch(const std::exception& e){
                classRemovalError(e);
            }
                
        }
        int getId(){
            return id;
        }
        std::string getName(){
            return name;
        }
        int getUnitsCompleted(){
            return numUnits;
        }
        std::vector<Course> getCourseList(){
            return courseList;
        }
        std::string getMajor(){
            return major;
        }

    private:
        void classRemovalError(const std::exception& e){
            std::cout << "Error occurred while removing this course. Please ensure that the course has not already been deleted" << std::endl;
        }
};