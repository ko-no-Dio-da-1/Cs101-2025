#include<iostream>
#include<string>
using namespace std;
class Car{
    protected:
    string m_DriveMode;
    private:
    int m_MaxSeating;
    int m_price;
    void m_UpdatePrice(int base = 500000){m_price=m_MaxSeating*base;}
    public:
    string m_brand;
    string m_model;
    int m_year;
    
    Car(string x, string y,int z, int s){
        m_brand=x;m_model=y;m_year=z;m_MaxSeating=s;m_UpdatePrice();}
        int get_MaxSeating(){return m_MaxSeating;}
        int get_Price(){return m_price;}
};
class BMW_Car :public Car {
    public :
    BMW_Car(string y, int z, int s) : Car("BMW",y,z,s){
        cout<<"Constructing BMW_Car\n";
        m_DriveMode="Rear-wheel";
    }
    string get_DriveMode(){return m_DriveMode;}
};
class AUDIO_Car :public Car {
    public :
    AUDIO_Car(string y, int z, int s) : Car("AUDIO",y,z,s){
        cout<<"Constructing AUDIO_Car\n";
        m_DriveMode="Front-wheel";
    }
    string get_DriveMode(){return m_DriveMode;}
};
class BENZ_Car :public Car {
    public :
    BENZ_Car(string y, int z, int s) : Car("BENZ",y,z,s){
        cout<<"Constructing BENZ_Car\n";
        m_DriveMode="Front-wheel";
    }
    string get_DriveMode(){return m_DriveMode;}
};
int main(){
    BMW_Car bmw("x5",2023,5);
    cout<<"BMW_DriveMode :"<<bmw.get_DriveMode()<<endl;
     AUDIO_Car audio("x6",2024,6);
    cout<<"AUDIO_DriveMode :"<<audio.get_DriveMode()<<endl;
     BENZ_Car benz("x7",2025,7);
    cout<<"BENZ_DriveMode :"<<benz.get_DriveMode()<<endl;
    return 0;
}
