/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
using namespace std;
class studentdetails{
    public:
    int regno[3],age[3];
    char gender[3];
    string name[3],address[3];
    
    void studentget(){
        for(int i=0;i<3;i++){
            cin>>regno[i];
        }
        for(int i=0;i<3;i++){
            cin>>name[i];
        }
        for(int i=0;i<3;i++){
            cin>>age[i];
        }
        for(int i=0;i<3;i++){
            cin>>gender[i];
        }
        for(int i=0;i<3;i++){
            cin>>address[i];
        }
    }
    void studentdisplay(){
        for (int i=0;i<3;i++){
            cout<<name[i]<<endl;
            cout<<regno[i]<<endl;
            cout<<age[i]<<endl;
            cout<<gender[i]<<endl;
            cout<<address[i]<<endl;
           }
    }
};
int main(){
    studentdetails s1;
    s1.studentget();
    s1.studentdisplay();
}