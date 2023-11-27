#include <iostream>
#include <limits>

class Counter {
private:
    int start;
public:
    std::string answer;
    std::string oper;

    Counter() {
        this->start = 1;
    }

    Counter(int inStart) {
        this->start = inStart;
    }

    int getStart() const
    {
        return start;
    }

    void add() {
        start = start + 1;
    }

    void subtract_start_1() {
        start = start - 1;
    };

};

int main(int argv, char** argc) {
    Counter counter;
    int i;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> counter.answer;
    if (counter.answer == "да" || counter.answer == "Да") {
        while (true) {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> i;
            if(std::cin.fail()){
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Это не число!" << std::endl;
                continue;
            }
            break;
        }
        counter = Counter(i);
    } else {
        std::cout << "Начальное значение счетчика по умолчанию: ";
        i = counter.getStart();
        std::cout << i << std::endl;
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
            std::cout << counter.getStart() << std::endl;
        }
    } while (counter.oper != "х" && counter.oper != "Х" && counter.oper != "x" && counter.oper != "X");
    {
        std::cout << "До свидания!" << std::endl;
    }
    return 0;
}