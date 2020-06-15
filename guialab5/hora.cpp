#include "iostream"


using namespace std;

int main(){ 
    int h,m,s;
    char c;
    
    cout<<"Bienvenido\nDigite el tiempo actual en el orden hh:mm:ss"<<endl;
    cin>>h>>c>>m>>c>>s;
    s = s + 1;
    if (s>= 60)
    {
        s = 0;
        m = m + 1;
        if (m >= 60)
        {
            m = 0;
            h = h + 1;
            if (h >=24)
            {
                h = 0;
            }
            
        }
        
    }
   if (h < 10) cout<<0; 
   cout << h;
   cout << ':';
   if (m < 10) cout<<0;
   cout << m;
   cout << ':';
   if (s < 10) cout<<0;
   cout << s;

    
    cout<<"el tiempo digitado +1 segundo es "<<h<<":"<<m<<":"<<s<<endl;
}

