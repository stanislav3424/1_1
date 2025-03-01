#include <iostream>

std::string IndexToMonth(int index);
bool validIndexEnum(int index);
bool Execute();


int main()
{
    setlocale(LC_ALL, "Russian");
    while (true)
    {
        if (Execute())
        {
            return 0;
        }
    }
}



std::string IndexToMonth(int index)
{
    months LocalVar = static_cast<months>(index);
    switch (LocalVar)
    {
    case months::January:
        return "Январь";
    case months::February:
        return "Февраль";
    case months::March:
        return "Март";
    case months::April:
        return "Апрель";
    case months::May:
        return "Май";
    case months::June:
        return "Июнь";
    case months::July:
        return "Июль";
    case months::August:
        return "Август";
    case months::September:
        return "Сентябрь";
    case months::October:
        return "Октябрь";
    case months::November:
        return "Ноябрь";
    case months::December:
        return "Декабрь";
    default:
        return "До свидания";
    }
}

bool validIndexEnum(int index)
{
    if ((index >= 0) && (index <= 12))
    {
        return true;
    }
    return false;
}

bool Execute()
{
    int input{};
    std::string strAnswer{};
    std::cout << "Введите номер месяца: ";
    std::cin >> input;
    if (validIndexEnum(input))
    {
        strAnswer = IndexToMonth(input);
    }
    else
    {
        strAnswer = "Неправильный номер!";
    }
    std::cout << strAnswer;
    std::cout << std::endl;
    if (input == 0)
    {
        return true;
    }
    return false;
}
enum class months
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};