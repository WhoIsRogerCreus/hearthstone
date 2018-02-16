#include <iostream>
#include <vector>

using namespace std;

//DATA
int totalCards = 777;
int totalCardsXHero = 45;
int totalCardsRWM = 44;
int commonCards = 238;
int rareCards = 188;
int epicCards = 118;
int legendCards = 100;

//Statistics
double probCommon = 71.23;
double probRare = 22.96;
double probEpic = 4.65;
double probLegend = 1.09;



//int classe:		0.-Mago / 1.-Priest / 2.-Hunter / 3.-Druid 4.-Warrior / 5.-Paladin
//more:				6.-Rogue / 7.-Shaman / 8.-Warlock / 9.-Neutral Cards			

struct carta{
	int cost;
	int raresa;
	bool golden;
	int repes;

};

using Deck = vector<vector<carta> >;

carta createSampleCard(){
	carta sample;
	sample.cost = -1;
	sample.atac = -1;
	sample.vida = -1;
	sample.raresa = -1;
	sample.type = -1;
	sample.repes = -1;
	return sample;

}

void fillEmptyCollection(Collection coll){
	for(int i = 0; i < 10;i++){
		for(int j = 0; j < 11; j++){
			
		}

	}
	cout << endl;
}



//CONTAR 

int main(){
	carta sample = createSampleCard();

	Deck collection = Deck(10,vector<carta>)
	

	


}


























