

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H


class Contact {


public:

    int index;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string login;
    std::string postal_address;
    std::string email_address;
    std::string phone_numer;
    std::string birthday_date;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;
    Contact();
    //Contact(const Contact&);
    ~Contact();

    static size_t getNbInst();

    void setIndex(int i);
    static size_t numObjs();
    int  addContact(Contact currentContact);
    void searchCommand(Contact *allContact);

private:

  static size_t _count;
 
};

#endif
