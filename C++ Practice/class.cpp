#include <iostream>
#include <sstream>
using namespace std;

// https://www.hackerrank.com/challenges/c-tutorial-class/problem?h_r=next-challenge&h_v=zen

class Student{
    private:
        string last_name;
        string first_name;
        int age;
        int standard;

    public:
        int get_age(){
            return age;
        }
        string get_first_name(){
            return first_name;
        }
        string get_last_name(){
            return last_name;
        }
        int get_standard(){
            return standard;
        }
        void set_age(int n){
            age = n;
        }
        void set_first_name(string n){
            first_name = n;
        }
        void set_last_name(string n){
            last_name = n;
        }
        void set_standard(int n) {
            standard = n;
        }
        string to_string(){
            string hold ="";
            stringstream ss(hold);
            ss << age << ',' <<first_name<<','<<last_name<<','<<standard<<endl;
            return ss.str();
        }
};

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
    cout << st.to_string();
    
    return 0;
}

