//Stores a map of cities as a vector of structs Allows the user to search a city Sorts cities by distance using std::sort Finds a city using std::find_if Calculates total distance with std::accumulate Cities sorted by distance: Ahmedabad - 0 km Vadodara - 110 km Bhavnagar - 170 km Rajkot - 215 km Surat - 265 km Enter city to search: Surat Found Surat at distance 265 km Total distance of all cities combined: 760 km Use strcut struct City { string name; int distance; distance from home city }; int main() { vector<City> cities = { {"Ahmedabad", 0}, {"Surat", 265}, {"Vadodara", 110}, {"Rajkot", 215}, {"Bhavnagar", 170} }


#include<iostream>
#include<numeric>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;

typedef struct City {
    string name;
    int distance;
}city;
    
bool comparator(city c1, city c2) {
    if(c1.distance < c2.distance) return true;
    else return false;
}

void print(vector<city> v) {
    cout << left;
    for(auto val : v) {
        cout << setw(15) << val.name  << val.distance << "km" << endl;
    }
}

int main() {
    vector<city> cities = {
        {"Ahmedabad", 0},
        {"Surat", 265},
        {"Vadodara", 110},
        {"Rajkot", 215},
        {"Bhavnagar", 170}
    }; 

    // sort(cities.begin(), cities.end(),comparator);
    sort(cities.begin(), cities.end(), [](city c1,city c2) {
        return c1.distance < c2.distance;
    });
    print(cities);

    string key;
    cout << "Enter city to search: ";
    cin >> key;

    auto it = find_if(cities.begin(), cities.end(), [key](const city& c) {
        return c.name == key;
    });

    if(it!=cities.end()) {
        cout << "City " << it->name << " found at distance: " << it->distance << "km" << endl;
    } else {
        cout << "City Not Found";
    }

    int totaldistance = accumulate(cities.begin(), cities.end(), 0, [](int x, const city& c) {
            return x + c.distance;
    });

    cout << "Total Distance is : " << totaldistance << "km" << endl;
    return 0;
}