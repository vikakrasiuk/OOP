#include <iostream.h>

#include <string.h>

class vuprobyvania

{ 
public: 
   vuprobyvania(char *, char *, float); 
   void show_vuprobyvania(void); 
private: 
   char misce [ 50 ]; 
   char data[50]; 
   float predmet; 
};

vuprobyvania::vuprobyvania(char *misce, char *data,float predmet)

{ 
   vuprobyvania(vuprobyvania::misce, misce); 
   vuprobyvania(vuprobyvania::data, data); 
   vuprobyvania::predmet = predmet; 
}

void vuprobyvania::show_vuprobyvania(void)

{ 
   cout << "Місце: " << misce << endl; 
   cout << "Дата: " <<data << endl; 
   cout << "Предмет: " << predmet << endl; 
}

class test : public vuprobyvania

{ 
public: 
  test(char *, char *, char *, float,int); 
   void show_test(void); 
private:  
   char bal[50]; 
   int  zavdania; 
};

test::test(char *misce, char *data, char *bal, float predmet,int zavdania) : vuprobyvania(misce, data, predmet)

{ 
   strcpy(test::bal,zavdania ) ; 
   test::bal = bal ; 
   test::zavdania = zavdania; 
}

void test::show_test(void)

{ 
   show_vuprobyvania(); 
   cout << "Бал: " << bal << endl; 
   cout << "завдання: " << zavdania << endl; 
   
}

void main(void)

{ 
      vuprobyvania OOP; 
      OOP.show_vuprobyvania() ;
      test zadachi cpp;
   zadachi_cpp.show_test(); 
   system("PAUSE");
   return EXIT_SUCCESS;
}
