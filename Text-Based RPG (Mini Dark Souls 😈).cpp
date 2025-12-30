#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


class Player {
public:
	int hp;
	int attack;
	bool alive;

	Player() {

		
		hp = 100;
		attack = 15;
		alive = true;

	}


	void takeDamage(int dmg) {
		hp -= dmg;
		if (hp <= 0) {
			alive = false;


		}


	}

	void attackEnemy(int &enemyHp) {
		enemyHp -= attack;



	}




};

class Enemy {
public:
	int hp;
	int attack;

	Enemy() {
	
		hp = 80;
		attack = 10;

	}

	void takeDamage(int dmg) {
		hp -= dmg;

	}


	bool isAlive() {
		return hp > 0;

	}




};

void fight(Player& player, Enemy& enemy) {
	while (player.alive && enemy.isAlive()) {

		cout << "Choose your action : [1] ATTACK , [2] DEFEND " << endl;
		int choice;
		cin >> choice;

		if (choice == 1) {
			enemy.takeDamage(player.attack);

			cout << "Players  ATTACK !! Enemy hp is :" << enemy.hp << endl;




		}
		else if (choice == 2) {
			cout << "Player DEFENDS!! Damage will be reduced this turn." << endl;


		}
		else {

			cout << "Invalid choice! Skipping turn..." << endl;
			break;
		}


		if (enemy.isAlive()) {
			int damage = rand() % 11 + 5;
			

			if (rand() % 100 < 20) {

				damage *= 2;
				cout << "CRITICAL HIT !!!" << endl;
			}









			if (choice == 2) damage / 2;
			player.takeDamage(damage);



			cout << "Enemy ATTACK!! Player HP: " << player.hp << endl;
			



		}



		

	
		cout << "--------------------------" << endl;


		if (player.alive) {
			cout << "YOU BEAT THE ENEMY!" << endl;





		}
		else {
			cout << "You lose it but dont give up" << endl;
		}


	}


};






int main()
{

	cout << "=== MINI DARK SOULS ===" << endl;
	cout << "YOU WOKE UP IN A DARK LAND !"<<endl;

	Player player;
	Enemy enemy;

	fight(player, enemy);
   
	return 0;

}

