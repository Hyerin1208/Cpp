#include "mainGame.h"
#include "player.h"
#include "enemy.h"

int main()
{
	player* pl = new player; // <-동적할당 할땐 new
	enemy* em = new enemy;

	pl->printPlayer();
	em->printEnemy();

	em->setEnemyHP(em->getEnemyHP() - pl->getPlayerAtk());

	em->printEnemy();

	delete pl; // 동적할당한 메모리 반환하려면 delete
	delete em;
}