# include<iostream>
# include<bits/stdc++.h>
# include<string.h>
# include<string>
# include<fstream>
using namespace std;
void clrscr()
{
   system("cls");
}
class Customer
{
    public:
    int client_no;
    string Fname;
    string Lname;
    string date;
    string address;
    string mob_no;
    float cost;
    fstream fio;
    void Reg()
    {
        fio.open("customer.txt",ios::app|ios::in);
        cin>>client_no>>Fname>>Lname>>date>>address>>mob_no;
        fio<<client_no<<"   "<<Fname<<"     "<<Lname<<"     "<<date<<"      "<<address<<"     "<<mob_no<<endl;
        fio.close();
    }
    void display()
    {
        clrscr();
        char ch;
        fio.open("customer.txt",ios::app|ios::in);
        ch=fio.get();
        while(!fio.eof())
        {
        cout<<ch;
        ch=fio.get();
        }
        fio.close();

    }
};
int main()
{
    Customer r;
     cout<<"Client_no.      Fname       Lname       date        address         mob_no          "<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------------"<<endl;
    int y=0;
    do
    {
        r.Reg();
        y++;
    }while(y!=3);
    r.display();
}
