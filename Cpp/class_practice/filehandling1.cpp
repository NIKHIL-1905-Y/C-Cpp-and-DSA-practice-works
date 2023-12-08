#include<iostream>
#include<fstream>
using namespace std;

int main()

{
    ofstream fout;
    fout.open("D:/coa/file handling.txt",ios::out);
    if(!fout)
    {
        cout<<"file not created"<<endl;

    }
    else
    {
        cout<<"File created succesfully"<<endl;
        fout<<" this is the jaadu of file handling";
    }
    return 0;


}