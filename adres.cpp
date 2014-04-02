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
      ~ADRESS();
      char*GetName();
      char*GetStreet()const;
      char*GeHousenumber()const;
      void SetName(char*);
      void SetStreet(char*);
      void SetHousenumber(int);
      void Set(char*,char*,int);
      void show();    
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
void ADRESS::show()
      {cout<<"("<<name<<","<<street<<","<<housenumber<<")";
      }
ADRESS::~ADRESS()
  {
  delete [] name; 
  delete [] street; 
  cout<<vuzvan destrykto<<endl;
   }  

 main()
     {
      ADRESS Crishchatik;
      Crishchatik.show();
      system("PAUSE");
      return EXIT_SUCCESS;
      }
