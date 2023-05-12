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
#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    cout<<"            WELCOME TO LAHORE GARRISON UNIVERSITY             "<<endl;
    cout<<"                    A PROJECT OF PAK ARMY             "<<endl;
    string name1,name2,name3;
    cout<<" ENTER YOUR FIRST NAME: "<<endl;
    //یہاں تک ہم نے کچھ بھی الگ نہیں کیا
    // I HAVEN'T DID ANY THING DIFFERENT HERE ❤
    cin>>name1;
    cout<<" ENTER YOUR MIDDLE NAME: "<<endl;
    cin>>name2;
    cout<<" ENTER YOUR LAST NAME: "<<endl;
    cin>>name3;
    cout<<" YOUR NAME IS "<<name1<<" "<<name2<<" "<<name3<<endl;
    char gender;
    cout<<" ENTER YOUR GENDER: "<<endl;
    cout<<"1. M FOR MALE "<<endl;
    cout<<"2. F FOR FEMALE "<<endl;
    cout<<"3. C FOR CUSTOM "<<endl;
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
    string address_yours;
    cout<<" ENTER YOUR ADDRESS WITHOUT SPACES: ";
    cout<<" JUST WRITE YOUR HOUSE NUMBER, BLOCK, SOCIETY, CITY "<<endl;
    cin>>address_yours;
    cout<<" YOUR ADDRESS IS "<<address_yours<<endl;
    //یہاں تک ہم نے کچھ بھی الگ نہیں کیا
    // I HAVEN'T DID ANY THING DIFFERENT HERE ❤


    int marks1;
    cout<<" ENTER YOUR MARKS IN MATRIC "<<endl;
    cin>>marks1;
    cout<<" YOUR MARKS IN MATRIC ARE "<<marks1<<endl;


    int marks2;
    cout<<" ENTER YOUR MARKS IN INTERMEDIATE "<<endl;
    cin>>marks2;
    cout<<" YOUR MARKS IN INTERMEDIATE ARE "<<marks2<<endl;


   /* float percent1;
    percent1=(marks1/1100)*100;
    cout<<" PERCENTEGE IN MATRIC= "<<percent1;


    float percent2;
    percent2=(marks2/1100)*100;
    cout<<" PERCENTAGE IN INTERMEDIATE= "<<percent2;*/


    string resulting1=(marks1>=500 && marks2>=500)? " YOU ARE ELIGIBLE TO APPLY " : " YOU ARE NOT ELIGIBLE TO APPLY ";
    cout<<resulting1<<endl;  
    return 0;

}