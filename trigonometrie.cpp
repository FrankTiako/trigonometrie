#include <iostream>

float pow(float x, float y);
int factoriel(int a);
float radians(float x);
float cos(float x);
float sin(float x);
float tan(float x);

float radians(float x){
    float r;
    r = (x * 3.1415)/180;
    return r;
}

float pow(float x, float y){
    float p = 1;
    if(y == 0){
        return 1;
    }else{
        for(int i=1;i<=y;i++){
            p = p*x;
        }
        return p;
    }
}

int factoriel(int a){
    int i,f=1;
    if(a == 0){
        return 1;
    }else{
        for(i = 1; i<=a; i++){
            f = f*i;
        }
        return f;
    }
}

float cos(float x){
    int i,t=0,f;
    float c=0;
    for(i = 0; i<=10;i+=2){
        f = factoriel(i);
        c = pow(-1,t)*(pow(x,i)/f) + c;
        t +=1;
    }
    return c;
}

float sin(float x){
    int i ,t=0 ,f;
    float s = 0;
    for(i = 1; i<=10; i+=2){
        f = factoriel(i);
        s = pow(-1,t)*(pow(x,i)/f) + s;
        t +=1;
    }
    return s;
}

float tan(float radian){
    float t;
    t = sin(radian)/cos(radian);
    return t;
}

int main(int argc,char**argv){
    float radian,cosinus,sinus,tangente,x;
    std::cout << "Entrez la mesure de votre angle" << std::endl;
    std::cin >> x;
    radian = radians(x);
    cosinus = cos(radian);
    sinus = sin(radian);
    tangente = tan(radian);
    std::cout <<"Son cosinus est: "<< cosinus<< std::endl;
    std::cout <<"Son sinus est: "<< sinus <<  std::endl;
    std::cout <<"Sa tangente est: "<< tangente <<  std::endl;
    return 0;

}
