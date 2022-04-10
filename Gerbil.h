#ifndef GERBIL_H
#define GERBIL_H

#include <bits/stdc++.h>
using namespace std;

class Gerbil {
 private:
    string Breed;
    float Weight;
    string Name;
    char Gender;
    string Favorite_Food;
    string Color_Description;
    string Other_Comments;
 public:
    //accessors
    string getBreed();
    float getWeight();
    string getName();
    char getGender();
    string getFavorite_Food();
    string getColor_Description();
    string getOther_Comments();
   
    //mutators
  void setBreed(string breeed);
    void setWeight(float weight);
    void setName(string name);
    void setGender(char gender);
    void setFavorite_Food(string favorite_food);
    void setColor_Description(string color_description);
    void setOther_Comments(string other_comments);

    //constructors
    Gerbil();

    
    Gerbil(string breed, float weight, string name, char gender, string favorite_food, string color_description, string other_comments);

    
    void printInfo(); 
  };
#endif 
    