

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

Class Contact {

public:

    char name;

    Contact(char* str);
    ~Contact(void);

    getName();
    static int getNbInst(void);
    int compare( Contact * oth_instance ) const;

private:

  static int _nbInst;
  int    _id;
  char* _firstName;
  char* _lastName;
  char* _nickName;
  char* _login;
  char* _postal_address;
  char* email_address;
  char* phone_numer;
  char* birthday_date;
  char* favorite_meal;
  char* underwear_color;
  char* darkest_secret;

  first name, last name, nickname,
  login, postal address, email address, phone number, birthday date, favorite
  meal, underwear color and darkest secret
};


#endif
