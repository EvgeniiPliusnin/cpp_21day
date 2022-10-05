#include <iostream>

class Date {
    private:
        int day, month, year;

    public:
        Date (int day, int month , int year) : month(month), day(day), year(year) {};

        Date& operator ++  () {
            ++day;
            return *this;
        }

        Date& operator -- () {
            --day;
            return *this;
        }

        void display_date() {
            std::cout << day << " / " << month << " / " << year << std::endl;
        }
};

int main(int argc, char const *argv[])
{
    Date holiday (25, 12, 2022); // Dec 25, 2022
    std::cout << "The date object is initializated to: ";
    holiday.display_date();

    ++holiday;
    std::cout << "Date after prefix-increment is: ";
    holiday.display_date();

    --holiday;
    std::cout << "Date after prefix-decrement is: ";
    holiday.display_date();

    return 0;
}
