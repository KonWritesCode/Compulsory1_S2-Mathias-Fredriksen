#include "Animal.h"
#include "Task2.h"
#include "Task3.h"

void Task1() {
	Dog Fido;
	Fido.name = "Fido";
	Fido.Speak(Fido.name);

	Cat Milly;
	Milly.name = "Milly";
	Milly.Speak(Milly.name);

	Bird Charlie;
	Charlie.name = "Charlie";
	Charlie.Speak(Charlie.name);
}

void Task2() {
	Vector2 Position(5.f, 3.f);
	Vector2 Speed(3.f, 3.f);
	Vector2 BuffSpeedMultiplier(2.f, 2.f); //1 = no buff
	Vector2 DebuffSpeedMultiplier(1.f, 1.f); // 1 = no debuff

	Vector2 result = Position + Speed * (BuffSpeedMultiplier / DebuffSpeedMultiplier);
	std::cout <<"X: " <<  result.x << ", Y: " <<  result.y << std::endl;
}

void Task3() {
	CombineTemplate<std::string, int> Jack ("Jack", 22);
	Jack.Print();
	/*CombineTemplate<std::string, std::string> World("Hello", "World!"); // Prints out "Hello world!"
	World.Print();*/
}

int main() {
	std::cout << "Task 1:\n";
	Task1();
	std::cout << "\nTask 2:\n";
	Task2();
	std::cout << "\nTask 3:\n";
	Task3();
}

