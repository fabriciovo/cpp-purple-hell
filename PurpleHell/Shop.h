#ifndef SHOP_H
#define SHOP_H
#include "Hero.h"
#include "Item.h"
class Shop
{
public:
	Shop();

	void Render(sf::RenderTarget* target);
	void Update(sf::Vector2f mousePos, const float& dt);

	~Shop();
private:
	std::string names[82] = 
		{		"Gylan",
				"Amer",
				"Alam",
				"Rewy",
				"Gery",
				"Ealdard",
				"Reder",
				"Wuldrer",
				"Cyne",
				"Anwulf",
				"Aldhed",
				"Odund",
				"Waegstio",
				"Walter",
				"Chughye",
				"Hrither",
				"Beornwy",
				"Nathye",
				"Behrtio",
				"Gerey",
				"Wisym",
				"Ewin",
				"Bralphye",
				"Tane",
				"Cyne",
				"Hilex",
				"Helry",
				"There",
				"Elmheaf",
				"Enryn",
				"Wine",
				"Munder",
				"Gileon",
				"Henrey",
				"Heaher",
				"Lesym",
				"Gerey",
				"Narder",
				"Helre",
				"Sige",
				"Henrey",
				"Bealda",
				"Hughye",
				"Lifan",
				"Gery",
				"Walter",
				"Wisym",
				"Seve",
				"Edmugh",
				"Sige",
				"Hunbeorht",
				"Raffin",
				"Brither",
				"James",
				"Cuthhelbr",
				"Walter",
				"Aered",
				"Wulfa",
				"Frica",
				"Rewyn",
				"Trica",
				"Homes",
				"Aerelm",
				"Helman",
				"Winne",
				"Aeged",
				"Helmund",
				"Earchic",
				"Ralphye",
				"Johny",
				"Artin",
				"Chenry",
				"Sige",
				"Hames",
				"Rarder",
				"George",
				"Gilas",
				"Genthyg",
				"Lesym",
				"Vyncis",
				"Centwy" };

	static const int maxArrayValues = 10;
	Hero* heroes[maxArrayValues];
	Item* items[maxArrayValues];
};
#endif