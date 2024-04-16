#include<iostream>
using namespace std;

class person{
	
	public:
		char name[10];
		int age;
		char gender[10];
		person(int a){
			age=a;
		}
		person(){
			age=0;
		}
};

class student: public person{
	
	public: int roll_no;
			int marks;
			student(int m){
				marks=m;
			}
};
class teacher: person{
	public: float salary;
			int id_no;
			teacher(int id){
				id_no=id;
			}
};
int main()
{
	person p(18),p1;
	student s(76.12);
	teacher t(21);
	cout<<p.age<<endl;
	cout<<p1.age<<endl;
	cout<<s.age<<endl;
	cout<<s.marks<<endl;
	cout<<t.id_no<<endl;
	return 0;
}
