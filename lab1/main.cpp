#include <iostream>
using namespace std;

class dog{
private:
    string str;
    double weight;
    int test;

public:
    dog(){      //initialize
        str="mutt";
        weight=0;

    }
    dog(string str, double weight){
        this->str=str;
        this->weight=weight;
    }
    dog(int weight){
        this->weight=weight;
    }

    void setBreed(string str){
        this->str=str;
    }

    void setWeight(double weight){
        this->weight = weight;
        if(weight<0){
            this->weight=0;
        }
    }
    void speak(){
        cout<<"I'm a " << weight <<" lbs "<< str << endl;
    }

    void switchBodies(dog &other) {
        string tempStr;
        double tempDou;
        tempStr=str;
      str=other.str;
        other.str=tempStr;

        tempDou= weight;
        weight=other.weight;
        other.weight=tempDou;
    }

  dog mateWith(dog otherDog){
      otherDog.weight = (otherDog.weight+weight)/2;
      otherDog.str= str + "-" + otherDog.str;
      return otherDog;
  }

    void bite(dog &otherDog) {
        weight=weight+10;
        otherDog.weight= otherDog.weight-10;
    }

    dog operator++(int ){
        weight= weight +100;
       return weight;
    }

};


int main() {
    //step 1: set up dog class, implement default constructors
	dog bonny;
	dog wimpy;

	//step 2: set two different parameterized constructors
	dog fido("rottweiler", 200);
	dog snuffles(15);

	//step 3: create "set" methods
	bonny.setBreed("pit bull");
	bonny.setWeight(500);

	wimpy.setWeight(-300);

	//step 4: create a speak method
	bonny.speak(); //I'm a 500 lbs pit bull
	wimpy.speak(); //I'm a 0 lbs mutt
	fido.speak();  //I'm a 200 lbs rottweiler
	snuffles.speak(); //I'm a 15 lbs mutt

	//step 5: switch bodies!
	bonny.switchBodies(fido);

	bonny.speak(); //I'm a 200 lbs rottweiler
	fido.speak();  //I'm a 500 lbs pit bull

	//step 6: love is in the air
	dog puppy;
	puppy = fido.mateWith(wimpy);

	puppy.speak(); //I'm a 250 lbs pit bull-mutt

	//step 7: uh oh, they're fighting...
	puppy.bite(fido);
	puppy.speak(); //I'm a 260 lbs pit bull-mutt
	fido.speak();  //I'm a 490 lbs pit bull-mutt

	//step 8: let's feed that puppy
	puppy++;
	puppy.speak(); //I'm a 360 lbs pit bull-mutt

	return 0;
}