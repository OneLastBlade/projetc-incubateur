#ifndef FINANCE_H
#define FINANCE_H

class Finance {
private:
    double revenues;
    double expenses;

public:
    Finance(double _revenues, double _expenses) : revenues(_revenues), expenses(_expenses) {}

    double getRevenues() const {
        return revenues;
    }

    double getExpenses() const {
        return expenses;
    }

    double calculateProfit() const {
        return revenues - expenses;
    }
};

#endif // FINANCE_H
