#include <iostream.h>
#include <string.h>
using namespace std;

class vuprobyvania

{ 

protected: 
   char* misce ; 
   char* data; 
   float predmet; 
public: 
   vuprobyvania();
   vuprobyvania(char* misce, char* data, float predmet); 
   vuprobyvania(const vuprobyvania&)
};
 
 ~vuprobyvania();
 char* Getmisce();
 char * Getdata();
 float Getpredmet() const;
 void Setmisce(char*);
 void Setdata(char*);
 void Setpredmet(float);
 void Set(char*,char*,float);
 void Show();
 };
vuprobyvania::vuprobyvania()
{
misce=new char[26];
misce[0]=0;
data=0;
predmet=0;
cout<<"konstructor bez parametriv"<<endl;
}
void vuprobyvania::show()
{
cout<<"misce:"<<misce<<"data:"<<data<<"predmet:"<<predmet<<endl;
}
vuprobyvania::vuprobyvania(char* _misce,char* _data,float _predmet)
{ 
  int v=strlen(_misce);
 this->misce=new char[v+1];
 strncpy(misce, _misce,v);
 name[v]=0;
 
 this->data=_data;
 this->predmet=_predmet;
 cout <<" konstructor z parametrami"<< endl;
 }
 void vuprobyvania::Show()
{ 
 cout << "misce: " << misce <<"data: " << data << "predmet: " << predmet << endl;   
}
vuprobyvania::vuprobyvania(const vuprobyvania &x)
{
int v=strlen(x.misce);
this->misce=new char[v+1];
strncpy(misce,x.misce,v);
misce[v]=0;
this->data=x.data;

this->predmet=x.predmet;
}
void vuprobyvania::setmisce(char*misce)
{
if (misce) delete[]misce;
int v=strlen(_misce);
misce=new char[v+1];
strncpy(misce,_misce,v);
misce[v]=0;
}
char*getmisce()
{
char*&=new char[strlen(misce)+1];
strcpy(&,misce,strlen(misce));
&=[strlen(misce)]=0;
return &;
}

void vuprobyvania::setdata(char*data)
{
if (data) delete[]data;
int v=strlen(_data);
data=new char[v+1];
strncpy(data,_data,v);
data[v]=0;
}
char*getdata()
{
char*&=new char[strlen(data)+1];
strcpy(&,data,strlen(data));
&=[strlen(data)]=0;
return &;
}
void vuprobyvania::setpredmet(char*predmet)
{
if (predmet) delete[]predmet;
int v=strlen(_predmet);
predmet=new char[v+1];
strncpy(predmet,_predmet,v);
predmet[v]=0;
}
 
char*getpredmet()
{
char*&=new char[strlen(predmet)+1];
strcpy(&,predmet,strlen(predmet));
&=[strlen(predmet)]=0;
return &;
}
int main()
{
 vuprobyvania w1;
  w1.show();
  vuprobyvania w2("Shevchenka",10,1);
  w2.show();
  
vuprobyvania*w=new vuprobyvania;
vuprobyvania("Khreschatyk",12,1);
w->show();
    system("PAUSE");
  return EXIT_SUCCESS;;
}
