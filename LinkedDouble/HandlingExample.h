//
// Created by Esteban on 18/12/2023.
//

#ifndef DATASTRUCTURES_HANDLINGEXAMPLE_H
#define DATASTRUCTURES_HANDLINGEXAMPLE_H



class HandlingPhone : LinkedDouble<Phone>{

public:

    HandlingPhone();
    bool twoDigits(std::string);
    bool isDigit(std::string);
    bool isYear(std:: string);
    double utilLife(std:: string, std:: string );
    void addPhone(Phone phone, int op);
    bool findPhone(const string, Phone phone, int orden);
    bool getFirstLast(int op);
    void showPhone(const string);
    void deletePhone(const string);
    int sizePhone();
    bool findNodeExist(const string);
    std::vector<Phone> getPhones(bool sw);

    ~HandlingPhone() override;

private:

    LinkedDouble<Phone> linkedPhones;


};


#endif //DATASTRUCTURES_HANDLINGEXAMPLE_H
