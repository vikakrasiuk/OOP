#include <iostream.h>
#include <string.h>

using namespace std;
class ADRESS
{
   protected:
     char*name;
     char*street;
     int housenumber;

   public:
      ADRESS();
    ADRESS(char*newname,char*newstreet,int newhousenumber);
    ADRESS(const char* name, const char*street, int  newhousenumber);
      ~ADRESS();

      char*GetName();
      char*GetStreet()const;
      char*GeHousenumber()const;
      void SetName(char*);
      void SetStreet(char*);
      void SetHousenumber(int);
      void Set(char*,char*,int);
      void show(); 
      {
      cout<<"("<<name<<","<<street<<","<<housenumber<<")";
      }
   
};

ADRESS::ADRESS()
   {
      name = new char[15];
      name[0]=0;
      street = new char[15];
      street[0]=0;
      housenumber=0;
      cout<<vuzvan konstryktor bez parametriv<<endl;
    }
 
ADRESS::ADRESS(char*new_name, char*new_street, int new_housenumber)
{
int n=strlen(new_name);
name=new char[n+1];
strncpy(name, new_name, n);
name[n]=0;
n=strlen(new_street);
street=new char[n+1];
strncpy(street, new_street, n);
street[n]=0;
housenumber=new_housenumber;
}

void ceh::show()
{
cont << "("<< name <<","<< street <<","<< housenumber <<")";
}

ADREES::ADRESS(const ADRESS & k)
{
int n=strlen(k.name);
name=new char[n+1];
strncpy(name,k.name,n);
name[n]=0;
n=strlen(k.street);
street=new char[n+1];
strncpy(street,k.street,n);
street[n]=0;
n=strlen(k.housenumber);
housenumber=k.housenumber;
}

void ADRESS::set_Name(char*name)
{
if (name) delete[]name;
int n=strlen(new_name);
name=new char[n+1];
strncpy(name,new_name,n);
name[n]=0;
}

char*get_Name()
{
char*&=new char[strlen(name)+1];
strcpy(&,name,strlen(name));
&=[strlen(name)]=0;
return &;
}
void ADRESS::set_Street(char*street)
{
if (street) delete[]street;
int n=strlen(new_street);
street=new char[n+1];
strncpy(name,new_street,n);
street[n]=0;
}
char*get_Street()
{
char*&=new char[strlen(street)+1];
strcpy(&,street,strlen(street));
&=[strlen(street)]=0;
return &;
void ceh::set_Housenumber(char*housenumber)
{
if (housenumber) delete[]housenumber;
int n=strlen(new_housenumber);
housenumber=new char[n+1];
strncpy(housenumber,new_housenumber,n);
housenumber[n]=0;
}

char*get_Housenumber()
{
char*&=new char[strlen(housenumber)+1];
strcpy(&,housenumber,strlen(housenumber));
&=[strlen(kRobitnukiv)]=0;
return &;
}

 int main()
     {
        ADRESS A1;
ADRESS A2("Shevchenka","Khreschatyk",20);
A1.show();
A2.show();
ADRESS*p=new ADRESS();
ADRESS("Mozhaiskogo","Krylova",20);
p -> show();
system("pause");
return EXIT_SUCCESS;
}
     
