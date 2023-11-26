#include <iostream>

class Counter {
private:
    int start;
public:
    std::string answer;
    std::string oper;


    Counter() {
        this->start = 1;
    }

    int getStart() const //геттер смотрим значение поля start
    {
        return start;
    }

    void setStart(int value) //сеттер приравняем значение поле start к переменной value при этом поле start не изменится в классе
    {
        start = value;
    }

    void add() {
        start = start + 1;
    }

    void subtract_start_1() {
        start = start - 1;
    };

    int print() const {
        return start;
    }

};

int main() {
    Counter counter;
    int value;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> counter.answer;
    if (counter.answer == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> value;
        counter.setStart(value);
    } else {
        std::cout << "Начальное значение счетчика по умолчанию: ";
        value = counter.getStart();
        std::cout << value << std::endl;
    }
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> counter.oper;
        if (counter.oper == "+") {
            counter.add();
        }
        if (counter.oper == "-") {
            counter.subtract_start_1();
        }
        if (counter.oper == "=") {
            std::cout << counter.print() << std::endl;
        }
    } while (counter.oper != "х");
    return 0;
}