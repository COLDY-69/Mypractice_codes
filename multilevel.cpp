#include <iostream>
using namespace std;
class Name {
    public:
        string name,surname;
        void showN(string n, string s){
            name = n;
            surname = s;
            cout<<"Name : "<< name <<" "<< surname << endl;
        }
};
class ID : public Name {
    public:
        int id;
        void showId(int i){
        id = i;
        cout<<"ID : "<< id << endl;
    }
};
class Course : public ID {
    public:
        string course;
        void showC(string c){
            course = c;
            cout<<"Course : "<< course << endl;
        }

};
int main()
{
    string n1,s1,c1;
    int i1;
    cout<<"Enter first name : ";
    cin>>n1;
    cout<<"Enter last name : ";
    cin>>s1;
    cout<<"Enter ID : ";
    cin>>i1;
    cout<<"Enter course : ";
    cin>>c1;

    cout<<endl;
    cout<<"STUDENT DETAILS : "<< endl;
    Course co;
    co.showN(n1,s1);
    co.showId(i1);
    co.showC(c1);
    return 0;
}