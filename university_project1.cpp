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
//#include<iomanip>
//#include<fstream>
//#include<string>
using namespace std;
int main()
{
    system(" cls ");
    cout<<"            WELCOME TO LAHORE GARRISON UNIVERSITY             "<<endl;
    // using arrays
    cout<<" ENTER YOUR NAME:"<<endl;
    char yourname[100];
    cin.getline(yourname,100);
    cout<<" YOUR NAME IS "<<yourname<<endl;
    char fathername[100];
    cout<<" ENTER YOUR FATHER NAME: "<<endl;
    cin.getline(fathername,100);
    cout<<" YOUR FATHER NAME IS "<<fathername<<endl;
    system(" pause ");
    cout<<" PRESS ANY KEY TO PROCEED "<<endl;
    system(" cls ");
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
    system(" pause ");
    cout<<" PRESS ANY KEY TO PROCEED "<<endl;
    system(" cls ");
    char address[100];
    cout<<" ENTER YOUR VALID ADDRESS "<<endl;
    //cin.getline(address,100);
    cin.getline(address,100);
    cin.getline(address,100);
	cout<<" YOUR ADDRESS IS "<<address<<endl;
    system(" pause ");
    cout<<" PRESS ANY KEY TO PROCEED "<<endl;
    system(" cls ");
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

    int marks3;
    cout<<" ENTER YOUR MARKS IN ANY OF THE ENTRANCE TEST YOU GAVE WITHIN A YEAR "<<endl;
    cin>>marks3;
    cout<<" YOUR MARKS IN THE ENTRANCE TEST ARE "<<marks3<<endl;
    system(" pause ");
    cout<<" PRESS ANY KEY TO PROCEED "<<endl;
    system(" cls ");

    /*float percent1;
    percent1=(marks1/1100)*100;
    cout<<" PERCENTEGE IN MATRIC= "<<percent1<<endl;

    float percent2;
    percent2=(marks2/1100)*100;
    cout<<" PERCENTAGE IN INTERMEDIATE= "<<percent2<<endl;*/
    if (marks1>1100 || marks1<0 || marks2>1100 || marks2<0 || marks3>1100 || marks3<0)
    {
        cout<<" ERROR OCCURED"<<endl;
        cout<<" USE CORRECT NUMBER INPUT"<<endl;
        cout<<" ANY OF YOUR GIVEN MARKS ARE INCORRECT";
    }
    

    string resulting1=(marks1>=500 && !(marks1>1100) && marks2>=550 && !(marks2>1100) && marks3>50 && !(marks3>100))? " YOU ARE ELIGIBLE TO APPLY " : " YOU ARE NOT ELIGIBLE TO APPLY ";
    cout<<resulting1<<endl;
    system(" pause ");
    system(" cls ");
    

    
    return 0;

}