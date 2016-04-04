

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {

public:

    int index;
    Contact();
    ~Contact();

    static int getNbInst();

    void setIndex(int i);
    void setName(std::string name);
	bool checkStr(std::string str);

private:

  static int _nbInst;
  std::string _firstName;
  std::string _lastName;
  std::string _nickName;
  std::string _login;
  std::string _postal_address;
  std::string _email_address;
  std::string _phone_numer;
  std::string _birthday_date;
  std::string _favorite_meal;
  std::string _underwear_color;
  std::string _darkest_secret;
};

#endif
