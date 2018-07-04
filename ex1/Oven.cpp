#include "Oven.h"

Oven::Oven():temp(0),on(false),grill(false),microwave(true),doorOpen(false) {

}

bool Oven::start() {
	return (on = !doorOpen &&temp >0 &&(grill||microwave));
}

bool Oven::stop() {
	return!(on=!on);
}
void Oven::setTemp(int temp){
    if(temp<0)
        this->temp=0;
    else if (temp>800)
        this->temp=800;
    else this->temp=temp;
}
void Oven::setDoorOpen(bool doorOpen){
    this->doorOpen=doorOpen;
    if(this->doorOpen){
        on=false;
        grill=false;
    }
}
float Oven::getTemp(){
    return temp;
}
bool Oven::isGrill() {
    return grill;
}
bool Oven:: isDoorOpen(){
        return doorOpen;
}
bool Oven::isMicrowave() {
    return microwave;
}
bool Oven::isOn(){
    return on;
}
void Oven::setGrill(bool grill){
    this->grill=grill;
}
void Oven::setMicrowave(bool microwave){
    this->microwave=microwave;
}