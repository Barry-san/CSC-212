#include <iostream>
using namespace std;

class Employee
{
public:
    string first_name;
    string last_name;

    int age;
    string id;

    double annual_salary;

    Employee(string fname, string lname, string id, int age, double salary);
    void display();
};

Employee::Employee(/* args */ string fname, string lname, string id, int age, double salary)
{
    last_name = lname;
    first_name = fname;
}

void Employee::display()
{
    cout << "name: " << first_name << " " << last_name << endl;
}

class person
{
public:
    string name;
    int age;
    double height_in_cm;
    double weight_in_kg;
    char gender;

    person();
    person(string name, int age, double weight, double height, char gender);
    person(person &obj);
};

person::person()
{
    age, height_in_cm, weight_in_kg = 0;
    gender = 'M';
}

person::person(string name_param, int age_param, double weight_param, double height_param, char gender_param)
{
    age = age_param;
    name = name_param;
    age = age_param;
    weight_in_kg = weight_param;
    height_in_cm = height_param;
    gender = gender_param;
}

person::person(person &obj)
{
    name = obj.name;
    age = obj.age;
    weight_in_kg = obj.weight_in_kg;
    height_in_cm = obj.height_in_cm;
    gender = obj.gender;
}

class permanent_staff
{
public:
    string name;
    int age;
    string worker_id;
    int working_hours;
    double annual_salary;
    string department;

    permanent_staff();
    permanent_staff(string name, int age, string id, int hours, double salary, string dept);
    permanent_staff(permanent_staff &obj);
};

permanent_staff::permanent_staff(string name, int age, string id, int hours, double salary, string dept)
{
    name = name;
    age = age;
    worker_id = id;
    working_hours = hours;
    annual_salary = salary;
    department = dept;
}

permanent_staff::permanent_staff(permanent_staff &obj)
{
    name = obj.name;
    age = obj.age;
    worker_id = obj.worker_id;
    working_hours = obj.working_hours;
    annual_salary = obj.annual_salary;
    department = obj.department;
}

class casual_staff
{
public:
    string name;
    int age;
    string worker_id;
    int working_hours;
    double annual_salary;
    string department;

    casual_staff();
    casual_staff(string name, int age, string id, int hours, double salary, string dept);
    casual_staff(casual_staff &obj);
};

casual_staff::casual_staff(string name, int age, string id, int hours, double salary, string dept)
{
    name = name;
    age = age;
    worker_id = id;
    working_hours = hours;
    annual_salary = salary;
    department = dept;
}

casual_staff::casual_staff(casual_staff &obj)
{
    name = obj.name;
    age = obj.age;
    worker_id = obj.worker_id;
    working_hours = obj.working_hours;
    annual_salary = obj.annual_salary;
    department = obj.department;
}
