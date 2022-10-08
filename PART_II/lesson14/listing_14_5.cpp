#include <iostream>

template <typename T1 = int, typename T2 = double>
class HoldsPair {
    private:
        T1 value1;
        T2 value2;

    public:
        HoldsPair(const T1& val1, const T2& val2) : value1(val1), value2(val2) {}

        // accessor functions
        const T1& get_first_value() const;
        const T2& get_second_value() const;
};

// specialization of HoldPairs class for types int & int here
template<> class HoldsPair<int, int> {
    private:
        int value1;
        int value2;

    public:
        HoldsPair(const int& val1, const int& val2) : value1(val1), value2(val2) {}

        // accessor functions
        const int& get_first_value() const {
            std::cout << "returning integer " << value1 << std::endl;
            return value1;
        }

        const int& get_second_value() const {
            std::cout << "returning integer " << value2 << std::endl;
            return value2;
        }
};

template<> class HoldsPair<double, double> {
    private:
        double value1;
        double value2;

    public:
        HoldsPair(const double& val1, const double& val2) : value1(val1), value2(val2) {}

        const double& get_first_value() const {
            std::cout << "returning double " << value1 << std::endl;
            return value1;
        }

        const double& get_second_value() const {
            std::cout << "returning double " << value2 << std::endl;
            return value2;
        }
};


int main(int argc, char const *argv[])
{
    HoldsPair<int, int> pair_int_int(222, 333); 
    pair_int_int.get_first_value();
    pair_int_int.get_second_value();

    HoldsPair<double, double> pair_db_db(123.01, 1259.07);
    pair_db_db.get_first_value();
    pair_db_db.get_second_value();

    return 0;
}
