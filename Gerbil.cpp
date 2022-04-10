#include <bits/stdc++.h>
using namespace std;

#include "Gerbil.h"

void Gerbil ::setBreed(string breed)
{
    Breed = breed;
}
void Gerbil ::setWeight(float weight)
{
    Weight = weight;
}
void Gerbil ::setName(string name)
{
    Name = name;
}
void Gerbil ::setGender(char gender)
{
	Gender = gender;
}
void Gerbil ::setFavorite_Food(string favorite_food)
{
	Favorite_Food = favorite_food;
}
void Gerbil::setColor_Description(string color_description)
{
	Color_Description = color_description;
}
void Gerbil::setOther_Comments(string other_comments)
{
	Other_Comments = other_comments;
}

 string Gerbil ::getBreed()
{
    return Breed;
}
float Gerbil ::getWeight()
{
    return Weight;
}
string Gerbil ::getName()
{
	return Name;
}
char Gerbil :: getGender()
{
	return Gender;
}
string Gerbil :: getFavorite_Food()
{
	return Favorite_Food;
}
string Gerbil :: getColor_Description()
{
	return Color_Description;
}
string Gerbil :: getOther_Comments()
{
	return Other_Comments;
}
Gerbil ::Gerbil()
{
    Breed = "";
    Weight = 0;
    Name = "";
    Gender = ' ';
    Favorite_Food = "";
    Color_Description = "";
    Other_Comments = "";
}
Gerbil ::Gerbil(string breed, float weight, string name, char gender, string favourite_food, string color_description, string other_comments)
{
    Breed = breed;
    Weight = weight;
    Name = name;
    Gender = gender;
    Favorite_Food = favourite_food;
    Color_Description = color_description;
    Other_Comments = other_comments;
}
void Gerbil ::printInfo()
{
    cout << setw(20) << "Breed : " << Breed << endl;
    cout << setw(20) << "Weight : " << Weight << endl;
    cout << setw(20) << "Name : " << Name << endl;
    cout << setw(20) << "Gender : " << Gender << endl;
    cout << setw(20) << "Favorite Food : " << Favorite_Food << endl;
    cout << setw(20) << "Color Description : " << Color_Description << endl;
    cout << setw(20) << "Other Comments : " << Other_Comments << endl;
}


