#include <iostream>
#include <sstream>
using namespace std;

class Student {
	private:
		int age, standard;
		string first_name, last_name, str_age, str_standard;
		stringstream stream_age;
		stringstream stream_standard;
	public:
		void set_age(int i) {
			age = i;
			stream_age << age;
			stream_age >> str_age;
		}
		int get_age() {
			return age;
		}
		void set_first_name(string s) {
			first_name = s;
		}
		string get_first_name() {
			return first_name;
		}
		void set_last_name(string s) {
			last_name = s;
		}
		string get_last_name() {
			return last_name;
		}
		void set_standard(int i) {
			standard = i;
			stream_standard << standard;
			stream_standard >> str_standard;
		}
		int get_standard() {
			return standard;
		}
		string to_string() {
			return str_age + "," + first_name + "," + last_name + "," + str_standard;
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
