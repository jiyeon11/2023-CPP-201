#include<SFML/Graphics.hpp>

using namespace sf;

class Entity {
public:
	//���� 99.99%�̻� Ŭ������ �Ű������� �� ���� �ּҰ����� ����
	//�޸� �뷮 �� call by value �̽� ������
	Emtity(int like, RectangleShape* sprite)
		:life_(life), sprite_(sprite)
	{
	}
	~Entity() {}

	int get_life() { return life_; }
	RectangleShape get_sprite() { return *sprite_; }

	void set_life(int val) { life_ = val; }
	void set_sprite(RectangleShape* val) {sprite_ = val;}

private:
	int life_;
	RectangleShape* sprite_;
};

int main(void)
{
	RenderWindow window(VideoMode(1000, 800), "Sangsok");

	RectangleShape sp1;
	sp1.setPosition(400, 300);
	sp1.setSize(Vector2f(50, 50));
	sp1.setFillColor(Color::Blue);

	while (window.isOpen()) {
		Event e;
		while (window.pollEvent(e))
		{
			if (e.type == Event::Closed)
				window.close();
		}
		window.clear();

		window.draw(player->get_sprite());

		window.display();
	}
	return 0;
}