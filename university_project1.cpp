/*IN THIS SECTION WE WILL TAKE SOME INPUT FROM THE USER AND THEN WE WILL DISPLAY IT ON THE 
SCREEN.
I HAVE USED BASIC CONCEPTS TO CODE IT.
IT IS STATED THAT NO OBJECT-ORIENTED CONCEPT WILL  BE USED IN THIS PROJECT 
THIS CODE IS ONLY FOR 
1.UMER ZULFIQAR 
2.AMAN MIRZA
3.SUBHAN ALI 
4.WALEED IMRAN 
5.MUHAMMAD HASSAN
ALL OF THE CODE I HAVE DONE AS A PUBLIC REPOSITORY WITH THE NAME OF "MY-PROJECTS1" IS ONLY AND ONLY
FOR THESE FIVE PEOPLE, AS IT IS ACCORDING TO OUR REQUIRMENTS.😊
*/
/*کاپی رائٹ THE PRORAMMERS HUB SQUAD001*/
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    cout<<"            WELCOME TO LAHORE GARRISON UNIVERSITY             "<<endl;
    // using arrays
    string name[10];
    // name[0,1,2] are for student's names
    cout<<" ENTER YOUR FIRST NAME: "<<endl;
    cin>>name[0];
    cout<<" ENTER YOUR MIDDLE NAME: "<<endl;
    cin>>name[1];
    cout<<" ENTER YOUR LAST NAME: "<<endl;
    cin>>name[2];
    cout<<" YOUR NAME IS "<<name[0]<<" "<<name[1]<<" "<<name[2]<<endl;
    //name[3,4,5] are for father's name
    cout<<" ENTER YOUR FATHER FIRST NAME : "<<endl;
    cin>>name[3];
    cout<<" ENTER YOUR FATHER MIDDLE NAME : "<<endl;
    cin>>name[4];
    cout<<" ENTER YOUR FATHER LAST NAME : "<<endl;
    cin>>name[5];
    cout<<" YOUR FATHER NAME IS "<<name[3]<<" "<<name[4]<<" "<<name[5]<<endl;
    char gender;
    char M,F,C,m,f,c;
    cout<<" ENTER YOUR GENDER: "<<endl;
    cout<<"1. M.....MALE "<<endl;
    cout<<"2. F.....FEMALE "<<endl;
    cout<<"3. C.....CUSTOM "<<endl;
    cin>>gender;
    cout<<" YOUR GENDER IS "<<gender<<endl;
    int age;
    cout<<" ENTER YOUR AGE: "<<endl;
    cin>>age;
    cout<<" YOUR AGE IS "<<age<<endl;
    string qualification;
    cout<<" ENTER YOUR QUALIFICATION TILL NOW "<<endl;
    cin>>qualification;
    cout<<" YOUR QUALIFICATION TILL NOW IS "<<qualification<<endl;
    /*string  addressyours[100];
    cout<<" ENTER YOUR ADDRESS: "<<endl;
    cin>>addressyours[100];
    cout<<" YOUR ADRESS IS "<<addressyours<<endl;*/
    int marks1;
    cout<<" ENTER YOUR MARKS IN MATRIC "<<endl;
    cin>>marks1;
    cout<<" YOUR MARKS IN MATRIC ARE "<<marks1<<endl;

    int marks2;
    cout<<" ENTER YOUR MARKS IN INTERMEDIATE "<<endl;
    cin>>marks2;
    cout<<" YOUR MARKS IN INTERMEDIATE ARE "<<marks2<<endl;

    /*float percent1;
    percent1=(marks1/1100)*100;
    cout<<" PERCENTEGE IN MATRIC= "<<percent1<<endl;

    float percent2;
    percent2=(marks2/1100)*100;
    cout<<" PERCENTAGE IN INTERMEDIATE= "<<percent2<<endl;*/

    string resulting1=(marks1>=500 && marks2>=550)? " YOU ARE ELIGIBLE TO APPLY " : " YOU ARE NOT ELIGIBLE TO APPLY ";
    cout<<resulting1<<endl;
    
    return 0;

}