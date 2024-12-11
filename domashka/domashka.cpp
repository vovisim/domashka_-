#include <iostream>
using namespace std;

struct Rat {
    double ratSpeed;
    string ratName;
    double ratPosition;
    double ratWeight;
    string ratOuner;
    int ratAge;

    Rat(double rat_speed, string rat_name, double rat_position, double rat_weight, string rat_ouner, int rat_age)
        : ratSpeed(rat_speed), ratName(rat_name), ratPosition(rat_position), ratWeight(rat_weight), ratOuner(rat_ouner), ratAge(rat_age) {
    }
};

Rat makeNewRat(double rat_speed, string rat_name, double rat_position, double rat_weight, string rat_ouner, int rat_age) {
    Rat newrat(rat_speed, rat_name, rat_position, rat_weight, rat_ouner, rat_age);
    return newrat;
}

Rat newPosition(Rat rat, double new_ratposition) {
    rat.ratPosition = new_ratposition;
}

Rat newSpeedAndName(Rat rat, double new_speed, double new_name) {
    rat.ratName = new_name;
    rat.ratSpeed = new_speed;
}


int main() {

    Rat a = makeNewRat(10.0, "shlushka", 0.0, 40.0, "NY YAAAAAA", 100000000);

    cout << "Rat Name: " << a.ratName << endl;
    cout << "Rat Speed: " << a.ratSpeed << endl;
    cout << "Rat Position: " << a.ratPosition << endl;
    cout << "Rat Weight: " << a.ratWeight << endl;
    cout << "Rat Owner: " << a.ratOuner << endl;
    cout << "Rat Age: " << a.ratAge << endl;

    return 0;
}
