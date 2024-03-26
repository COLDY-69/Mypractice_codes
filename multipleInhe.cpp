// Calculator using multiple inheritance
#include <iostream>
using namespace std;
class Operator {
    public:
        char c;
        void getC(){
            cout<<"SELECT THE OPERATOR (+,-,*,/) : ";
            cin>>c;
        }
};
class Values {
    public:
        double n1,n2;
        void getV(){
            cout<<"Enter the first number : ";
            cin>>n1;
            cout<<"Enter the second number : ";
            cin>>n2;
        }
};
class Result : public Operator, public Values {
    public:
        void getR(){
            if (c == '+'){
                cout<<"Result = "<< n1 + n2;
            }
            else if (c == '-'){
                cout<<"Result = "<< n1 - n2;
            }
            else if(c == '*'){
                cout<<"Result = "<< n1 * n2;
            }
            else if(c == '/'){
                if(n2 != 0){
                    cout<<"Result = "<< n1 / n2;
                }
                else {
                    cout<<"Invalid !!!";
                }
            }
        }
};
int main(){
    Result r;
    
    r.getC();
    r.getV();
    r.getR();

    return 0;
}