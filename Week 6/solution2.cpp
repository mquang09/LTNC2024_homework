#include <bits/stdc++.h>

using namespace std;

class Student{
public:
    void set_age(int age);
    void set_standard(int standard);
    void set_first_name(string first_name);
    void set_last_name(string last_name);
    int get_age();
    int get_standard();
    string get_first_name();
    string get_last_name();
    string toString();

private:
    int age, standard;
    string first_name, last_name;
};

void Student::set_age(int age){
    this->age = age;
}

void Student::set_standard(int standard){
    this->standard = standard;
}

void Student::set_first_name(string first_name){
    this->first_name = first_name;
}

void Student::set_last_name(string last_name){
    this->last_name = last_name;
}

int Student::get_age(){
    return age;
}

int Student::get_standard(){
    return standard;
}

string Student::get_first_name(){
    return first_name;
}

string Student::get_last_name(){
    return last_name;
}

string Student::toString(){
    string res;
    res = to_string(age) + ',' + first_name + ',' + last_name + ',' + to_string(standard);
    return res;
}

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.toString();
    
    return 0;
}