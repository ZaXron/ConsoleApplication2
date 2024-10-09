#include <iostream>
using namespace std;

class laptop {
    char* model;
    char* cpu_model;
    char* video_card;
    int warranty;
    double price;
public:
    laptop();
    laptop(const char* model, const char* cpu_model, const char* video_card, int warranty, double price);
    void input();
    void output();
    void setmodel(const char* model);
    void setcpu(const char* cpu_model);
    void setvideocard(const char* video_card);
    void setwarranty(int warranty);
    void setprice(double price);
    char* getmodel();
    char* getcpu();
    char* getvideo_card();
    int getwarranty();
    double getprice();
    ~laptop();
};
========================================================================================================











laptop::laptop()
{
    model = nullptr;
    cpu_model = nullptr;
    video_card = nullptr;
    warranty = 0;
    price = 0;
}





laptop::laptop(const char* model, const char* cpu_model, const char* video_card, int warranty, double price)
{
    model = new char[strlen(model) + 1];
    strcpy_s(model, strlen(model) + 1, model);
    cpu_model = new char[strlen(cpu_model) + 1];
    strcpy_s(cpu_model, strlen(cpu_model) + 1, cpu_model);
    video_card = new char[strlen(video_card) + 1];
    strcpy_s(video_card, strlen(video_card) + 1, video_card);
    warranty = warranty;
    price = price;
}



void laptop::input()
{
    char buff[20];
    cout << endl << "input model: ";
    cin >> buff;
    if (model != nullptr)
    {
        delete[] model;
    }
    model = new char[strlen(buff) + 1];
    strcpy_s(model, strlen(buff) + 1, buff);

    cout << "input cpu model: ";
    cin >> buff;
    if (cpu_model != nullptr)
    {
        delete[] cpu_model;
    }
    cpu_model = new char[strlen(buff) + 1];
    strcpy_s(cpu_model, strlen(buff) + 1, buff);

    cout << "input video card: ";
    cin >> buff;
    if (video_card != nullptr)
    {
        delete[] video_card;
    }
    video_card = new char[strlen(buff) + 1];
    strcpy_s(video_card, strlen(buff) + 1, buff);

    cout << "input warranty: ";
    cin >> warranty;
    cout << "input price: ";
    cin >> price;
    cout << endl;
}







void laptop::output()
{
    cout << endl << "model: " << model << endl << "cpu model: " << cpu_model << endl << "video card: " << video_card << endl << "warranty: " << warranty << endl << "price: " << price << endl;
}

void laptop::setmodel(const char* model)
{
    if (model != nullptr)
    {
        delete[] model;
    }
    model = new char[strlen(model) + 1];
    strcpy_s(model, strlen(model) + 1, model);
}

void laptop::setcpu(const char* cpu_model)
{
    if (cpu_model != nullptr)
    {
        delete[] cpu_model;
    }
    cpu_model = new char[strlen(cpu_model) + 1];
    strcpy_s(cpu_model, strlen(cpu_model) + 1, cpu_model);
}

void laptop::setvideocard(const char* video_card)
{
    if (video_card != nullptr)
    {
        delete[] video_card;
    }
    video_card = new char[strlen(video_card) + 1];
    strcpy_s(video_card, strlen(video_card) + 1, video_card);
}

void laptop::setwarranty(int warranty)
{
    warranty = warranty;
}




void laptop::setprice(double price)
{
    price = price;
}




char* laptop::getmodel()
{
    return model;
}




char* laptop::getcpu()
{
    return cpu_model;
}




char* laptop::getvideo_card()
{
    return video_card;
}

int laptop::getwarranty()
{
    return warranty;
}

double laptop::getprice()
{
    return price;
}

laptop::~laptop()
{
    delete[] model;
    delete[] cpu_model;
    delete[] video_card;
}






int main() {
    laptop new_laptop;
    new_laptop.setmodel("lenovo");
    cout << new_laptop.getmodel() << endl;
    cout << new_laptop.getprice() << endl;

    laptop asus("asus", "intel", "nvidia", 1, 38000);
    asus.output();
    asus.setprice(35000);
    asus.output();

    laptop your_laptop;
    your_laptop.input();
    your_laptop.output();
    Your_l
