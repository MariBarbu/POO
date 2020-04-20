#include <exception>


class Myexception : public std::exception {
    const char* what_arg;
public:
  Myexception(const char* what_arg)throw(){
    this->what_arg = what_arg;
  }
  ~Myexception() throw(){};

  const char* what() const throw() {
    return this->what_arg;
  }
};
