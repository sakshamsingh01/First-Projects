#include <iostream>
#include <string>
using namespace std;
class binary
{
    private:
    string s;
    int no_cas(void);
public:
    void read(void);
    void cases(void);
  
};
void binary::read()
{
    cout << "Enter the no. whose cases you wanna find" << endl;
    cin >> s;
    cout<<"Number of cases will be: "<<no_cas()<<endl;
    cout<<"So the TOTAL cases are : "<<endl;
};
int binary::no_cas(){
    return (2 * s.length());
}
void binary::cases(){
   
    for ( int i = 0; i < s.length() ; i++)
    {
        if (isupper(s.at(i)))
        {
          s.at(i) = tolower(s.at(i));  
        }
        
        else if (islower(s.at(i)))
        {
          s.at(i) = toupper(s.at(i));  
        }
       cout<<s<<endl; 
    }
    };
    
    



 int main(){
    binary a;
    a.read();
    a.cases();
    a.cases();
    
    return 0;
 }
