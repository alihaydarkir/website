//030122047 MERVE ÇETİn
//030121059 ALİ HAYDAR KIR
#include<iostream>
using namespace std;

class dolap{                               //dolap sınıfı oluşturuldu.
private:
    float en,boy,yukseklik;                //public içinde üyeler tanımlandı.
public:                                    //oluşabilecek tüm constructorlar oluşturuldu.
     dolap(float e,float b,float y){
            en = e;
            boy = b;
            yukseklik = y;
    }
    dolap(float b,float y){
            boy = b;
            yukseklik = y;
    }
    
    dolap(){
        cout << "constructor cagirildi :)" << endl ; //constructor çağrıldı bilgisi kullanıcıya verildi.
    }

     ~dolap(){
        cout << "destructor cagirildi !!!" << endl; //destructor çağrıldı bilgisi kullanıcıya en sonda verildi.
    }
                                                    // set ile üyelere değer atanmak için parametreler oluşturuldu.
    void seten(float e){  
        en = e;
    }
    void setboy(float b){
        boy = b;
    }
    void setyukseklik(float y){
        yukseklik = y;
    }

                                                   // get ile üyelere atanan değerleri döndürmek üzere oluşturuldu.
    float geten(){
        return en;
    }
    float getboy(){
        return boy;
    }
    float getyukseklik(){
        return yukseklik;
    }
                                                // hacim adlı fonksiyon kullanıcıdan alınan bilgiler üzerinde işlem yaparak döndürüyor. 
    float hacim(){
        return en*boy*yukseklik;
    }
   
};

int main(){                                     // main oluşturuldu.
  float input,input1,input2;                    //kullanıcıdan alınıcak bilgiler için atanacak veriler oluşturuldu.
    dolap d;                                    // dolap adlı sınıfı d ye atadı.
     
                                                           
    cout << "dolabin boyunu metre cinsinden girin : " ;
    cin >> input ;
    
    cout << "dolabin enini metre cinsinden girin : " ;
    cin >> input1 ;
    
    cout << "dolabin yuksekligini metre cinsinden girin : ";
    cin >> input2 ;  
                                                                //kullanıcıdan alınan değerler sınıf içindeki nesnelere atandı.
d.setboy(input);  
d.seten(input1);  
d.setyukseklik(input2);  
                                                                //nesnelere atanan üyeler ekrana çıktı olarak gösterildi.

cout << endl <<"Girdiginiz Degerler " << endl <<"En: " << d.geten() <<"  Boy: "<< d.getboy() << "  Yukseklik: " << d.getyukseklik() << endl;
 
    
                                                             
cout << "Dolabinizin Hacmi = " << d.hacim() <<" m^3'tur "<< endl;      // sınıfın içindeki hacim fonksiyonunu çağırıp çıktı olarak verildi.


    return 0 ;
}


