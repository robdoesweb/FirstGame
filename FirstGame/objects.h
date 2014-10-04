//Object IDs
enum IDS{PLAYER, BULLET, ENEMY};

//Our player
struct SpaceShip
{
	int ID;
	int x;
	int y;
	int lives;
	int speed;
	int boundX;
	int boundY;
	int score;
};

struct Bullet
{
	int ID;
	int x;
	int y;
	bool live;
	int speed;

};

struct Comet
{
	int ID;
	int x;
	int y;
	bool live;
	int speed;
	int boundx;
	int boundy;
};